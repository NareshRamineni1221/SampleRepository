Action()
{
	
	web_cache_cleanup();
	web_cleanup_cookies();	
	
	web_set_max_html_param_len("999999");
	
   web_set_sockets_option("SSL_VERSION", "2&3");  
	
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	lr_start_transaction("S01_Onlinestore_Launch");

	web_url("13.233.120.29:4200", 
		"URL={p_url1}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_concurrent_start(NULL);

	web_url("runtime.js", 
		"URL={p_url1}runtime.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={p_url1}", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("polyfills.js", 
		"URL={p_url1}polyfills.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={p_url1}", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("styles.js", 
		"URL={p_url1}styles.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={p_url1}", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("vendor.js", 
		"URL={p_url1}vendor.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={p_url1}", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("main.js", 
		"URL={p_url1}main.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={p_url1}", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	
	web_url("smallerLogo.png", 
		"URL={p_url1}assets/smallerLogo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer={p_url1}", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("google-logo.png", 
		"URL={p_url1}assets/google-logo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer={p_url1}", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("info", 
		"URL={p_url1}sockjs-node/info?t=1601538788041", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("S01_Onlinestore_Launch", LR_AUTO);

//	web_websocket_connect("ID=0", 
//		"URI=ws://13.233.120.29/ws://13.233.120.29:4200/sockjs-node/851/horfwgnd/websocket", 
//		"Origin=http://13.233.120.29:4200", 
//		"OnOpenCB=OnOpenCB0", 
//		"OnMessageCB=OnMessageCB0", 
//		"OnErrorCB=OnErrorCB0", 
//		"OnCloseCB=OnCloseCB0", 
//		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/
	
	web_reg_save_param("c_Auth","lb={\"accessToken\":\"","rb=\",",LAST);
	
    lr_start_transaction("S01_Onlinestore_Login");

	web_custom_request("login", 
		"URL={p_url2}auth/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"{p_user}\",\"password\":\"{p_pass}\"}", 
		LAST);

    web_add_header("Authorization","Bearer {c_Auth}");
	web_custom_request("login_2", 
		"URL={p_url2}auth/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"{p_user}\",\"password\":\"{p_pass}\"}", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("generateOtp", 
		"URL={p_url2}generateOtp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
    
    lr_end_transaction("S01_Onlinestore_Login", LR_AUTO);
    
    web_add_header("Authorization","Bearer {c_Auth}");
    
    lr_start_transaction("S07_Onlinestore_Submitotp");
    
    web_reg_save_param("c_UserID","LB={\"userId\":","RB=,\"firstName",LAST);

	web_url("getLoggedInUser", 
		"URL={p_url2}getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("generateOtp_2", 
		"URL={p_url2}generateOtp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser_2", 
		"URL={p_url2}getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser_3", 
		"URL={p_url2}getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("notification", 
		"URL={p_url2}notification", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
    
    lr_end_transaction("S07_Onlinestore_Submitotp", LR_AUTO);
    
    web_add_header("Authorization","Bearer {c_Auth}");
    
    lr_start_transaction("S01_Onlinestore_T01_PreOrder_ClickOnPreOrder");

	web_url("getLoggedInUser_4", 
		"URL={p_url2}getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser_5", 
		"URL={p_url2}getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("notification_2", 
		"URL={p_url2}notification", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);
    
   lr_end_transaction("S01_Onlinestore_T01_PreOrder_ClickOnPreOrder", LR_AUTO);
	
	web_add_header("Authorization","Bearer {c_Auth}");	
	
    lr_start_transaction("S01_Onlinestore_T03_PreOrder_CreatePreOrder");
    
    web_reg_save_param("C_productId","lb={\"productId\":","rb=,\"productName",LAST);

	web_url("getEquipmentProductMappingListForForLoggedInUser", 
		"URL={p_url2}getEquipmentProductMappingListForForLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");
    web_add_header("Authorization","Bearer {c_Auth}");
    
    

	web_custom_request("getEquipmentProductMappingListForForLoggedInUser_2", 
		"URL={p_url2}getEquipmentProductMappingListForForLoggedInUser", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");
    
    
    web_reg_save_param("c_region","lb=region\":\"","rb=\"",LAST);
	
	web_reg_save_param("c_warehouseId","lb=[{\"warehouseId\"\:","rb=,\"",LAST);
	
	web_reg_save_param("c_stateId","lb={\"stateId\":","rb=,\"",LAST);
	
	web_reg_save_param("c_cityId","lb={\"cityId\":","rb=,\"",LAST);

	web_url("25", 
		"URL={p_url2}getWarehouseProductMappingByMasterProducts/{C_productId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");
    web_add_header("Authorization","Bearer {c_Auth}");
    

	web_custom_request("25_2", 
		"URL={p_url2}getWarehouseProductMappingByMasterProducts/{C_productId}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("S01_Onlinestore_T03_PreOrder_CreatePreOrder", LR_AUTO);
	
    web_reg_save_param("C_userProductPriceIds","lb=\"userProductPriceIds\":[","rb=]}",LAST);
	 
	 web_add_header("Authorization","Bearer {c_Auth}");
	 
     lr_start_transaction("S01_Onlinestore_T04_PreOrder_Proceed");

	web_custom_request("getPreOrderManagementNew", 
		"URL={p_url2}getPreOrderManagementNew", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"userId\":{c_UserID},\"productId\":{C_productId},\"region\":\"{c_region}\",\"stateId\":{c_stateId},\"cityId\":{c_cityId},\"warehouseId\":{c_warehouseId}}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization,content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");
    web_add_header("Authorization","Bearer {c_Auth}");

	web_custom_request("getPreOrderManagementNew_2", 
		"URL={p_url2}getPreOrderManagementNew", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");
    
    web_reg_save_param("C_year","lb=[{\"year\":","rb=,\"",LAST);
	 
	web_reg_save_param("C_preOrderQuarter","lb={\"quarter\":","rb=,\"quarterName",LAST);
	 
	web_reg_save_param("C_preOrderMonth","lb=monthNo\":","rb=,\"monthName",LAST);

	web_url("getPreOrderYearsData", 
		"URL={p_url2}getPreOrderYearsData", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

    web_add_header("Authorization","Bearer {c_Auth}");    
    
	
	web_custom_request("getPreOrderYearsData_2", 
		"URL={p_url2}getPreOrderYearsData", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("16", 
		"URL={p_url2}getPreOrderAvgConsumptionForLoggedInUser/{C_productId}/{c_warehouseId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");
    web_add_header("Authorization","Bearer {c_Auth}");

	web_custom_request("16_2", 
		"URL={p_url2}getPreOrderAvgConsumptionForLoggedInUser/{C_productId}/{c_warehouseId}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);
    
    lr_end_transaction("S01_Onlinestore_T04_PreOrder_Proceed", LR_AUTO);
    
    web_reg_save_param("C_preOrderId","lb={\"preOrderId\":","rb=,\"",LAST);
	
    lr_start_transaction("S01_Onlinestore_T05_PreOrder_SavePreOrder");
    
    web_add_header("Authorization","Bearer {c_Auth}");

	web_custom_request("savePreOrder", 
		"URL={p_url2}savePreOrder", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"userId\":{c_UserID},\"productId\":{C_productId},\"region\":\"{c_region}\",\"stateId\":{c_stateId},\"cityId\":{c_cityId},\"warehouseIds\":[{c_warehouseId}],\"preOrderQuantity\":12,\"preOrderYear\":{C_year},\"preOrderQuarter\":{C_preOrderQuarter},\"preOrderMonth\":{C_preOrderMonth},\"vendorProductPriceId\":37,\"userProductPriceIds\":[{C_userProductPriceIds}],\"preOrderPrice\":180}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization,content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");
    web_add_header("Authorization","Bearer {c_Auth}");

	web_custom_request("savePreOrder_2", 
		"URL={p_url2}savePreOrder", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("1181", 
		"URL={p_url2}getPreOrderManagementByPreOrderId/{C_preOrderId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");
    web_add_header("Authorization","Bearer {c_Auth}");

	web_custom_request("1181_2", 
		"URL={p_url2}getPreOrderManagementByPreOrderId/{C_preOrderId}", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t39.inf", 
		LAST);
    
    
    lr_end_transaction("S01_Onlinestore_T05_PreOrder_SavePreOrder", LR_AUTO);

	
	web_add_header("Authorization","Bearer {c_Auth}");
	
	
	lr_start_transaction("S01_Online_T06_PreOrder_ClickOnDashBoard");

	web_url("getLoggedInUser_6", 
		"URL={p_url2}getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser_7", 
		"URL={p_url2}getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);
    web_add_header("Authorization","Bearer {c_Auth}");

	web_url("notification_3", 
		"URL={p_url2}notification", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);
    
    lr_end_transaction("S01_Online_T06_PreOrder_ClickOnDashBoard", LR_AUTO);

	return 0;
}