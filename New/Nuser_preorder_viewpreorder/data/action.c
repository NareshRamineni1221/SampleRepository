Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("122.166.166.152:81", 
		"URL=http://122.166.166.152:81/", 
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

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("info", 
		"URL=http://122.166.166.152:81/sockjs-node/info?t=1600937692897", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=ws://122.166.166.152/ws://122.166.166.152:81/sockjs-node/656/dv0lboyt/websocket", 
		"Origin=http://122.166.166.152:81", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("login", 
		"URL=https://122.166.166.152:80/auth/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"corporateSupervisor1@gmail.com\",\"password\":\"pass\"}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"authorization,content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("login_2", 
		"URL=https://122.166.166.152:80/auth/login", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("generateOtp", 
		"URL=https://122.166.166.152:80/generateOtp", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser", 
		"URL=https://122.166.166.152:80/getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_2", 
		"URL=https://122.166.166.152:80/getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_3", 
		"URL=https://122.166.166.152:80/getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("notification", 
		"URL=https://122.166.166.152:80/notification", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_4", 
		"URL=https://122.166.166.152:80/getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_5", 
		"URL=https://122.166.166.152:80/getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("notification_2", 
		"URL=https://122.166.166.152:80/notification", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllUpcommingPreOrdersForLoggedInUser", 
		"URL=https://122.166.166.152:80/getAllUpcommingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getPayPendingPreOrdersForLoggedInUser", 
		"URL=https://122.166.166.152:80/getPayPendingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllUpcommingPreOrdersForLoggedInUser_2", 
		"URL=https://122.166.166.152:80/getAllUpcommingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllPreviousPreOrdersForLoggedInUser", 
		"URL=https://122.166.166.152:80/getAllPreviousPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllUpcommingPreOrdersForLoggedInUser_3", 
		"URL=https://122.166.166.152:80/getAllUpcommingPreOrdersForLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_6", 
		"URL=https://122.166.166.152:80/getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getLoggedInUser_7", 
		"URL=https://122.166.166.152:80/getLoggedInUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("notification_3", 
		"URL=https://122.166.166.152:80/notification", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://122.166.166.152:81/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}