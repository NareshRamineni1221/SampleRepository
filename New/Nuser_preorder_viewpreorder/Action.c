Action()
{
   web_cache_cleanup();

    web_cleanup_cookies();

	
	web_set_sockets_option("SSL_VERSION", "2&3");
	
	
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
  lr_start_transaction("S02_Onlinestore_Launch");

		
	web_url("122.166.166.152:81", 
		"URL={p_url1}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/runtime.js", ENDITEM, 
		"Url=/polyfills.js", ENDITEM, 
		"Url=/styles.js", ENDITEM, 
		"Url=/vendor.js", ENDITEM, 
		"Url=/main.js", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc4.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		"Url=/assets/smallerLogo.png", ENDITEM, 
		"Url=/assets/google-logo.png", ENDITEM, 
		"Url=https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css", ENDITEM, 
		"Url=https://use.fontawesome.com/releases/v5.8.2/webfonts/fa-solid-900.woff2", "Referer=https://use.fontawesome.com/releases/v5.8.2/css/all.css", ENDITEM, 
		LAST);


	web_url("info", 
		"URL={p_url1}sockjs-node/info?t=1600937692897", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_Launch", LR_AUTO);


//	web_websocket_connect("ID=0", 
//		"URI=ws://122.166.166.152/ws://122.166.166.152:81/sockjs-node/656/dv0lboyt/websocket", 
//		"Origin=http://122.166.166.152:81", 
//		"OnOpenCB=OnOpenCB0", 
//		"OnMessageCB=OnMessageCB0", 
//		"OnErrorCB=OnErrorCB0", 
//		"OnCloseCB=OnCloseCB0", 
//		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");
	
	web_reg_save_param("c_Auth","lb={\"accessToken\":\"","rb=\",",LAST);
	
    lr_start_transaction("S02_Onlinestore_Login");

		
	web_custom_request("login", 
		"URL={p_url2}auth/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"{p_user}\",\"password\":\"{p_pass}\"}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization,content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");
	
	
   web_add_header("Authorization","Bearer {c_Auth}");

	web_custom_request("login_2", 
		"URL={p_url2}auth/login", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
   
   
   web_add_header("Authorization","Bearer {c_Auth}");

	web_url("generateOtp", 
		"URL={p_url2}generateOtp", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
   
   
   web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser", 
		"URL={p_url2}getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_Login", LR_AUTO);

   
   
   web_add_header("Authorization","Bearer {c_Auth}");
   
    lr_start_transaction("S02_Onlinestore_SubmitOtp");

		
	web_url("getLoggedInUser_2", 
		"URL={p_url2}getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
   
   
   web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser_3", 
		"URL={p_url2}getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
   
web_add_header("Authorization","Bearer {c_Auth}");

	web_url("notification", 
		"URL={p_url2}notification", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_SubmitOtp", LR_AUTO);

		
		
  web_add_header("Authorization","Bearer {c_Auth}");
  
lr_start_transaction("S02_Onlinestore_T01_PreOrder_ClickonPreorder");

		
	web_url("getLoggedInUser_4", 
		"URL={p_url2}getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
  
  
web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser_5", 
		"URL={p_url2}getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
		
		
web_add_header("Authorization","Bearer {c_Auth}");

	web_url("notification_2", 
		"URL={p_url2}notification", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_T01_PreOrder_ClickonPreorder", LR_AUTO);

		
		
   web_add_header("Authorization","Bearer {c_Auth}");
   
lr_start_transaction("S02_Onlinestore_T02_PreOrder_ViewPreOrder");

		
	web_url("getAllUpcommingPreOrdersForLoggedInUser", 
		"URL={p_url2}getAllUpcommingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_T02_PreOrder_ViewPreOrder", LR_AUTO);

   
   
web_add_header("Authorization","Bearer {c_Auth}");

	lr_start_transaction("S02_Onlinestore_T03_PreOrder_PaymentPedndingPreOrders");

		web_url("getPayPendingPreOrdersForLoggedInUser", 
		"URL={p_url2}getPayPendingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"Referer={p_url1}", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_T03_PreOrder_PaymentPedndingPreOrders", LR_AUTO);

		
		
web_add_header("Authorization","Bearer {c_Auth}");

lr_start_transaction("S02_Onlinestore_T04_PreOrder_GoToViewPreOrderDashBoard");

			web_url("getAllUpcommingPreOrdersForLoggedInUser_2", 
		"URL={p_url2}getAllUpcommingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);
		  

	lr_end_transaction("S02_Onlinestore_T04_PreOrder_GoToViewPreOrderDashBoard", LR_AUTO);
	
	web_add_header("Authorization","Bearer {c_Auth}");

		

lr_start_transaction("S02_Onlinestore_T05_PreOrder_ViewOldPreOrders");

			web_url("getAllPreviousPreOrdersForLoggedInUser", 
		"URL={p_url2}getAllPreviousPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);
		
		
web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getAllUpcommingPreOrdersForLoggedInUser_3", 
		"URL={p_url2}getAllUpcommingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_T05_PreOrder_ViewOldPreOrders", LR_AUTO);

		
		
web_add_header("Authorization","Bearer {c_Auth}");

lr_start_transaction("S02_Onlinestore_T06_PreOrder_ClickOnDashBoard");

			web_url("getLoggedInUser_6", 
		"URL={p_url2}getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
		
		
web_add_header("Authorization","Bearer {c_Auth}");

	web_url("getLoggedInUser_7", 
		"URL={p_url2}getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
		
		
web_add_header("Authorization","Bearer {c_Auth}");

	web_url("notification_3", 
		"URL={p_url2}notification", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={p_url1}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S02_Onlinestore_T06_PreOrder_ClickOnDashBoard", LR_AUTO);


	return 0;
}