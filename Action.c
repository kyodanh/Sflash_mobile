Action()
{

	web_url("countTask_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/countTask_mobile?fromDate=2021-03-16%2000:00:00&toDate=2021-03-18%2023:59:00", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	lr_start_transaction("Trans_CreateTask_1");

	web_url("getUserInfo_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getBoardAndListByUsername_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/board/getBoardAndListByUsername_mobile?username={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("getUserInfo_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_custom_request("create_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/create_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t372.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acceptTime\":null,\"archived\":null,\"complexity\":1,\"createdTime\":\"2021-03-20T14:49:13.099Z\",\"createdUser\":\"{user}\",\"dateReport\":\"\",\"deadline\":1617156000000,\"deleted\":false,\"description\":\"Test20.3\",\"done\":false,\"doneTime\":null,\"modifiedTime\":\"2021-03-20T14:49:13.099Z\",\"modifiedUser\":\"{user}\",\"name\":\"Test 20.3\",\"numberProcess\":0,\"owner\":\"{user}\",\"periodReport\":\"Weekly\",\"result\":\"\",\"startTime\":null"
		",\"statusColor\":\"\",\"tenantId\":1,\"priority\":1,\"listId\":{listid}}", 
		LAST);
	
	web_url("countTask_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/countTask_mobile?fromDate=2021-03-16%2000:00:00&toDate=2021-03-18%2023:59:00", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_CreateTask_1",LR_AUTO);

	lr_think_time(14);
	
	lr_start_transaction("Trans_CreateTask_2");

	web_url("getUserInfo_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getBoardAndListByUsername_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/board/getBoardAndListByUsername_mobile?username={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("getUserInfo_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_custom_request("create_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/create_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t372.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acceptTime\":null,\"archived\":null,\"complexity\":1,\"createdTime\":\"2021-03-20T14:49:13.099Z\",\"createdUser\":\"{user}\",\"dateReport\":\"\",\"deadline\":1617156000000,\"deleted\":false,\"description\":\"Test20.3\",\"done\":false,\"doneTime\":null,\"modifiedTime\":\"2021-03-20T14:49:13.099Z\",\"modifiedUser\":\"{user}\",\"name\":\"Test 20.3\",\"numberProcess\":0,\"owner\":\"{user}\",\"periodReport\":\"Weekly\",\"result\":\"\",\"startTime\":null"
		",\"statusColor\":\"\",\"tenantId\":1,\"priority\":1,\"listId\":{listid}}", 
		LAST);

	web_url("countTask_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/countTask_mobile?fromDate=2021-03-16%2000:00:00&toDate=2021-03-18%2023:59:00", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_CreateTask_2",LR_AUTO);

	lr_think_time(14);
	
	lr_start_transaction("Trans_CreateTask_3");

	web_url("getUserInfo_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getBoardAndListByUsername_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/board/getBoardAndListByUsername_mobile?username={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("getUserInfo_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_custom_request("create_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/create_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t372.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acceptTime\":null,\"archived\":null,\"complexity\":1,\"createdTime\":\"2021-03-20T14:49:13.099Z\",\"createdUser\":\"{user}\",\"dateReport\":\"\",\"deadline\":1617156000000,\"deleted\":false,\"description\":\"Test20.3\",\"done\":false,\"doneTime\":null,\"modifiedTime\":\"2021-03-20T14:49:13.099Z\",\"modifiedUser\":\"{user}\",\"name\":\"Test 20.3\",\"numberProcess\":0,\"owner\":\"{user}\",\"periodReport\":\"Weekly\",\"result\":\"\",\"startTime\":null"
		",\"statusColor\":\"\",\"tenantId\":1,\"priority\":1,\"listId\":{listid}}", 
		LAST);
	
	web_url("countTask_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/countTask_mobile?fromDate=2021-03-16%2000:00:00&toDate=2021-03-18%2023:59:00", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_CreateTask_3",LR_AUTO);

	lr_think_time(14);
	
	lr_start_transaction("Trans_CreateTask_4");

	web_url("getUserInfo_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getBoardAndListByUsername_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/board/getBoardAndListByUsername_mobile?username={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("getUserInfo_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_custom_request("create_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/create_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t372.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acceptTime\":null,\"archived\":null,\"complexity\":1,\"createdTime\":\"2021-03-20T14:49:13.099Z\",\"createdUser\":\"{user}\",\"dateReport\":\"\",\"deadline\":1617156000000,\"deleted\":false,\"description\":\"Test20.3\",\"done\":false,\"doneTime\":null,\"modifiedTime\":\"2021-03-20T14:49:13.099Z\",\"modifiedUser\":\"{user}\",\"name\":\"Test 20.3\",\"numberProcess\":0,\"owner\":\"{user}\",\"periodReport\":\"Weekly\",\"result\":\"\",\"startTime\":null"
		",\"statusColor\":\"\",\"tenantId\":1,\"priority\":1,\"listId\":{listid}}", 
		LAST);

	web_url("countTask_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/countTask_mobile?fromDate=2021-03-16%2000:00:00&toDate=2021-03-18%2023:59:00", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_CreateTask_4",LR_AUTO);

	lr_think_time(14);
		lr_start_transaction("Trans_CreateTask_5");

	web_url("getUserInfo_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getBoardAndListByUsername_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/board/getBoardAndListByUsername_mobile?username={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_url("getUserInfo_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_custom_request("create_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/create_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t372.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acceptTime\":null,\"archived\":null,\"complexity\":1,\"createdTime\":\"2021-03-20T14:49:13.099Z\",\"createdUser\":\"{user}\",\"dateReport\":\"\",\"deadline\":1617156000000,\"deleted\":false,\"description\":\"Test20.3\",\"done\":false,\"doneTime\":null,\"modifiedTime\":\"2021-03-20T14:49:13.099Z\",\"modifiedUser\":\"{user}\",\"name\":\"Test 20.3\",\"numberProcess\":0,\"owner\":\"{user}\",\"periodReport\":\"Weekly\",\"result\":\"\",\"startTime\":null"
		",\"statusColor\":\"\",\"tenantId\":1,\"priority\":1,\"listId\":{listid}}", 
		LAST);

	web_url("countTask_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/countTask_mobile?fromDate=2021-03-16%2000:00:00&toDate=2021-03-18%2023:59:00", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_CreateTask_5",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("on going task");

	web_url("getObjectAccept_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/getObjectAccept_mobile?fromDate=16-03-2021&toDate=18-03-2021", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("countTask_mobile_3", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/countTask_mobile?fromDate=2021-03-16%2000:00:00&toDate=2021-03-18%2023:59:00", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("on going task",LR_AUTO);

	lr_think_time(8);

	lr_start_transaction("Trans_DanhsachTask");

		
	web_url("countCreatedTasks_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/countCreatedTasks_mobile?createdUser={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getByUsernameLowerCase_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/activityUser/getByUsernameLowerCase_mobile?numberOfRecord=12", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countAssignedAndCancelTasks_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/countAssignedAndCancelTasks_mobile?owner={user}&username={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countCreatedTasks_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/countCreatedTasks_mobile?createdUser={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("getCreatedTasks_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getCreatedTasks_mobile?createdUser={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAssignedTasks_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getAssignedTasks_mobile?owner={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_DanhsachTask",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("Trans_OpenTask");

	web_url("getCreatedTasks_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getCreatedTasks_mobile?createdUser={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAssignedTasks_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getAssignedTasks_mobile?owner={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_OpenTask",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("Trans_ChonTask");
	
	
		web_reg_save_param_json(

       "ParamName=taskid",

       "QueryString=$..taskId",

       SEARCH_FILTERS,

       "Scope=Body",

       LAST);
	
	
	web_url("getObjectAccept_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/report/getObjectAccept_mobile?fromDate=16-03-2021&toDate=31-03-2021", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);
	
	web_url("getByTaskId_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/component/getByTaskId_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getOne_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getOne_mobile?id={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getByTaskId_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/comment/getByTaskId_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAttachments_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/attachment/getAttachments_mobile/?parentType=TASK&parentId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getUserInfo_mobile_3", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("resultByTask_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/results/resultByTask_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_ChonTask",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("Trans_AddWorkLog");

	web_url("resultByTask_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/results/resultByTask_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_custom_request("new_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/results/new_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"createdTime\":\"2021-03-17T06:26:55.385Z\",\"deleted\":false,\"taskId\":{taskid},\"note\":\" \",\"effort\":8,\"result\":\"Test17\",\"type\":\"Normal\",\"createdUser\":\"{user}\"}", 
		LAST);

	web_url("resultByTask_mobile_3", 
		"URL=http://performance-server-test.sflash.eiss.vn/results/resultByTask_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getByTaskId_mobile_3", 
		"URL=http://performance-server-test.sflash.eiss.vn/component/getByTaskId_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getByTaskId_mobile_4", 
		"URL=http://performance-server-test.sflash.eiss.vn/comment/getByTaskId_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAttachments_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/attachment/getAttachments_mobile/?parentType=TASK&parentId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getOne_mobile_2", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getOne_mobile?id={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getUserInfo_mobile_4", 
		"URL=http://performance-server-test.sflash.eiss.vn/user/getUserInfo_mobile?username=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_AddWorkLog",LR_AUTO);

	lr_think_time(12);

	lr_start_transaction("Trans_Comment");

	web_custom_request("addComment_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/comment/addComment_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"content\":\"Test\",\"deleted\":false,\"createdTime\":\"2021-03-17T06:27:14.405Z\",\"usernameLowerCase\":\"{user}\",\"taskId\":{taskid}}", 
		LAST);

	web_url("getByTaskId_mobile_5", 
		"URL=http://performance-server-test.sflash.eiss.vn/comment/getByTaskId_mobile/?taskId={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_Comment",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("Trans_CloseTask");

	web_custom_request("doneTask_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/doneTask_mobile?id={taskid}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_url("getOne_mobile_3", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getOne_mobile?id={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("updateStatus_mobile", 
		"URL=http://performance-server-test.sflash.eiss.vn/status/updateStatus_mobile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"implementer\":\"{user}\",\"modifiedUser\":\"{user}\",\"status\":\"CLOSED\",\"taskId\":{taskid}}", 
		LAST);

	web_url("getOne_mobile_4", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getOne_mobile?id={taskid}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Trans_CloseTask",LR_AUTO);

	lr_think_time(6);

	web_url("getAssignedTasks_mobile_3", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getAssignedTasks_mobile?owner={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getCreatedTasks_mobile_3", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/getCreatedTasks_mobile?createdUser={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("countCreatedTasks_mobile_4", 
		"URL=http://performance-server-test.sflash.eiss.vn/task/countCreatedTasks_mobile?createdUser={user}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
