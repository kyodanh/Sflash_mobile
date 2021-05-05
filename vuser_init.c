/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : thêm mo´i paramater user va`o code
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	lr_start_transaction("login");

		web_reg_save_param_json(

       "ParamName=token",

       "QueryString=$.authToken",

       SEARCH_FILTERS,

       "Scope=Body",

       LAST);
	
	
	web_custom_request("login", 
		"URL=http://performance-server-test.sflash.eiss.vn/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"username\":\"{user}\",\"password\":\"12345678\",\"firebaseTokenKey\":\"fhuF0Ft5RqKHGuUt8zDEjf:APA91bGGU0KTfxyQm2QVcVrNkROQ5xqyR14v7VxH2V6bFeEdj27QitUK0pd21IrKVuPssmfXX1kDIlSSymnjf5x-SwBLy_4Ng1gJ_-2fopD3vyKAJlkvokMvfRfjhLpAZ9tmVWEWSVrO\"}", 
		LAST);

	  web_add_auto_header("Authorization", "Bearer {token}");
	
	
	lr_end_transaction("login",LR_AUTO);

	lr_think_time(4);

	web_url("getByUsernameLowerCase_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/activityUser/getByUsernameLowerCase_mobile?numberOfRecord=12", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
//danhnc14
	
	
	return 0;
}
