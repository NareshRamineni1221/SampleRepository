Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("13.233.120.29:4200", 
		"URL=http://13.233.120.29:4200/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_concurrent_start(NULL);

	web_url("runtime.js", 
		"URL=http://13.233.120.29:4200/runtime.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("polyfills.js", 
		"URL=http://13.233.120.29:4200/polyfills.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("styles.js", 
		"URL=http://13.233.120.29:4200/styles.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("vendor.js", 
		"URL=http://13.233.120.29:4200/vendor.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("main.js", 
		"URL=http://13.233.120.29:4200/main.js", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("KFOlCnqEu92Fr1MmSU5fBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc4.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("fa-solid-900.woff2", 
		"URL=https://use.fontawesome.com/releases/v5.8.2/webfonts/fa-solid-900.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://use.fontawesome.com/releases/v5.8.2/css/all.css", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Origin", 
		"http://13.233.120.29:4200");

	web_url("fontawesome-webfont.woff2", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/fonts/fontawesome-webfont.woff2?v=4.7.0", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("smallerLogo.png", 
		"URL=http://13.233.120.29:4200/assets/smallerLogo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("google-logo.png", 
		"URL=http://13.233.120.29:4200/assets/google-logo.png", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t11.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("info", 
		"URL=http://13.233.120.29:4200/sockjs-node/info?t=1601538788041", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=ws://13.233.120.29/ws://13.233.120.29:4200/sockjs-node/851/horfwgnd/websocket", 
		"Origin=http://13.233.120.29:4200", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("login", 
		"URL=http://52.66.237.253:8182/auth/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"CorporateNusertest01@gmail.com\",\"password\":\"Temp@123\"}", 
		LAST);

	web_custom_request("login_2", 
		"URL=http://52.66.237.253:8182/auth/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"CorporateNusertest01@gmail.com\",\"password\":\"Temp@123\"}", 
		LAST);

	web_url("generateOtp", 
		"URL=http://52.66.237.253:8182/generateOtp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser", 
		"URL=http://52.66.237.253:8182/getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("generateOtp_2", 
		"URL=http://52.66.237.253:8182/generateOtp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_2", 
		"URL=http://52.66.237.253:8182/getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_3", 
		"URL=http://52.66.237.253:8182/getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("notification", 
		"URL=http://52.66.237.253:8182/notification", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_4", 
		"URL=http://52.66.237.253:8182/getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_5", 
		"URL=http://52.66.237.253:8182/getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("notification_2", 
		"URL=http://52.66.237.253:8182/notification", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getEquipmentProductMappingListForForLoggedInUser", 
		"URL=http://52.66.237.253:8182/getEquipmentProductMappingListForForLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("getEquipmentProductMappingListForForLoggedInUser_2", 
		"URL=http://52.66.237.253:8182/getEquipmentProductMappingListForForLoggedInUser", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("25", 
		"URL=http://52.66.237.253:8182/getWarehouseProductMappingByMasterProducts/25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("25_2", 
		"URL=http://52.66.237.253:8182/getWarehouseProductMappingByMasterProducts/25", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("getPreOrderManagementNew", 
		"URL=http://52.66.237.253:8182/getPreOrderManagementNew", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"userId\":2121,\"productId\":25,\"region\":\"SOUTH\",\"stateId\":4026,\"cityId\":57847,\"warehouseId\":16}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization,content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("getPreOrderManagementNew_2", 
		"URL=http://52.66.237.253:8182/getPreOrderManagementNew", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getPreOrderYearsData", 
		"URL=http://52.66.237.253:8182/getPreOrderYearsData", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("getPreOrderYearsData_2", 
		"URL=http://52.66.237.253:8182/getPreOrderYearsData", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("16", 
		"URL=http://52.66.237.253:8182/getPreOrderAvgConsumptionForLoggedInUser/25/16", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("16_2", 
		"URL=http://52.66.237.253:8182/getPreOrderAvgConsumptionForLoggedInUser/25/16", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("savePreOrder", 
		"URL=http://52.66.237.253:8182/savePreOrder", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"userId\":2121,\"productId\":25,\"region\":\"SOUTH\",\"stateId\":4026,\"cityId\":57847,\"warehouseIds\":[16],\"preOrderQuantity\":12,\"preOrderYear\":2020,\"preOrderQuarter\":4,\"preOrderMonth\":11,\"vendorProductPriceId\":37,\"userProductPriceIds\":[50,51],\"preOrderPrice\":180}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization,content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("savePreOrder_2", 
		"URL=http://52.66.237.253:8182/savePreOrder", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("1181", 
		"URL=http://52.66.237.253:8182/getPreOrderManagementByPreOrderId/1181", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("1181_2", 
		"URL=http://52.66.237.253:8182/getPreOrderManagementByPreOrderId/1181", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("getLoggedInUser_6", 
		"URL=http://52.66.237.253:8182/getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_7", 
		"URL=http://52.66.237.253:8182/getLoggedInUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("notification_3", 
		"URL=http://52.66.237.253:8182/notification", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://13.233.120.29:4200/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}