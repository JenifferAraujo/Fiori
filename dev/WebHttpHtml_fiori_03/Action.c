Action()
{
	web_set_sockets_option("SSL_VERSION", "TLS");

	web_url("applauncher.chip.xml", 
		"URL=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/chips/applauncher.chip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/theming/themes/~client-100/UI5/sap/fiori/themes/avnetT1/img/misc/sapUiGlobalBackgroundImage.jpeg", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3ASAP_SD_BC_FIELDSALESREP_X1%3A00O2TO88JXF3QEA7IOGMRJBHL%3ACONFIGURATION')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	web_url("applauncher_dynamic.chip.xml", 
		"URL=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/chips/applauncher_dynamic.chip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../resources/sap/ushell/loader.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=../resources/sap/fiori/core-ext.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ushell/loader.js", ENDITEM, 
		"Url=/sap/opu/odata/UI2/INTEROP/ResolveLink?linkId='PurchaseOrder-track'&shellType='FLP'&formFactor='desktop'", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/mm_purord_tpo/Component-preload.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/mm_purord_tpo/i18n/i18n_en.properties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/mm_purord_tpo/resources/sap/ca/scfld/md/css/scfld.css", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/sap/SRA020_PO_TRACKING_SRV;mo/$metadata?sap-client=100", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		LAST);

	web_url("S2.view.xml", 
		"URL=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/sap/mm_purord_tpo/view/S2.view.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../i18n/i18n.properties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ui/core/themes/base/img/1x1.gif", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Bags(pageId='%2FUI2%2FPERSONALIZATION',id='sap.ushell.personalization%23sap.ushell.services.UserRecents')?$expand=Properties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		LAST);
	

//	web_custom_request("$batch", 
//		"URL=https://fioripoc.avnet.com:8443/sap/opu/odata/UI2/PAGE_BUILDER_PERS/$batch", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=multipart/mixed", 
//		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", 
//		"Snapshot=t6.inf", 
//		"Mode=HTML", 
//		"EncType=multipart/mixed;boundary=batch_f2ad-6c65-b37f", 
//		"Body=--batch_f2ad-6c65-b37f\r\nContent-Type: multipart/mixed; boundary=changeset_aba6-810e-752c\r\n\r\n--changeset_aba6-810e-752c\r\nContent-Type: application/http\r\nContent-Transfer-Encoding: binary\r\n\r\nPUT Properties(pageId='%2FUI2%2FPERSONALIZATION',bagId='sap.ushell.personalization%23sap.ushell.services.UserRecents',name='ITEM%23AppsUsage') HTTP/1.1\r\nAccept: application/atomsvc+xml;q=0.8, application/json;odata=fullmetadata;q=0.7, application/json;q=0.5, */*;q=0.1\r\nDataServiceVersion: "
//		"1.0\r\nContent-Type: application/json\r\nMaxDataServiceVersion: 3.0\r\nContent-Length: 490\r\n\r\n{\"__metadata\":{\"type\":\"PAGE_BUILDER_PERS.Property\"},\"pageId\":\"/UI2/PERSONALIZATION\",\"bagId\":\"sap.ushell.personalization#sap.ushell.services.UserRecents\",\"name\":\"ITEM#AppsUsage\",\"value\":\"{\\\"recentDay\\\":\\\"2015/3/24\\\",\\\"recentAppsUsageMap\\\":{\\\"PurchaseOrder-track\\\":[4,2,2,9,19,14,5],\\\"PurchaseRequisition-approve\\\":[1,0,0,0,0,0,0],\\\"PurchaseContract-approve\\\":"
//		"[1,0,0,0,0,0,0],\\\"Product-display\\\":[1,1,0,0,0],\\\"SalesOrder-track\\\":[3,0,0,0],\\\"SalesOrder-create\\\":[1,0,0,0]}}\",\"translatable\":\"\"}\r\n--changeset_aba6-810e-752c--\r\n\r\n--batch_f2ad-6c65-b37f--", 
//		EXTRARES, 
//		"Url=/sap/opu/odata/sap/SRA020_PO_TRACKING_SRV;mo/POLists?$skip=0&$top=100&$orderby=CreatedAt%20desc&$filter=CreatedAt%20gt%20%2720150317%27&$inlinecount=allpages&sap-client=100", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
//		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	lr_think_time(4);

	web_url("FioriLaunchpad.html_3", 
		"URL=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ushell_abap/bootstrap/abap.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-0.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui2/start_up?target=PurchaseOrder-track&formFactor=desktop&sap-language=EN&sap-client=100&shellType=FLP&depth=0", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-1.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-2.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-3.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/public/bc/themes/~client-100/~cache-ug1SBGXW3G6QNOfeuK1vDcDRTY0/UI5/sap/fiori/themes/avnetT1/library.css", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ushell_abap/library-preload.json", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/messagebundle-preload_en.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/public/bc/themes/~client-100/~cache-ug1SBGXW3G6QNOfeuK1vDcDRTY0/UI5/sap/fiori/themes/avnetT1/library-parameters.json", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-ext.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/mm_purord_tpo/Component-preload.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/sap/mm_purord_tpo/i18n/i18n_en.properties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		LAST);

	web_url("S2.view.xml_2", 
		"URL=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/sap/mm_purord_tpo/view/S2.view.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	//x-csrf-token: pr_7Z3wx4uUNnGURz3WxoQ==
	//xsrfid: pr_7Z3wx4uUNnGURz3WxoQ==
	web_reg_save_param_ex(
		"ParamName=xsrfid",
		"LB=xsrfid: ",
		"RB===",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);
	
	lr_start_transaction("Display_filtered_result");

	web_url("sapUiGlobalBackgroundImage.jpeg", 
		"URL=https://fioripoc.avnet.com:8443/sap/bc/theming/themes/~client-100/UI5/sap/fiori/themes/avnetT1/img/misc/sapUiGlobalBackgroundImage.jpeg", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Bags(pageId='%2FUI2%2FPERSONALIZATION',id='sap.ushell.personalization%23sap.ushell.services.UserRecents')?$expand=Properties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		LAST);
	
	//X-CSRF-Token: pr_7Z3wx4uUNnGURz3WxoQ==
	web_add_header("X-CSRF-Token", "{xsrfid}==");
	
	web_custom_request("$batch_2", 
		"URL=https://fioripoc.avnet.com:8443/sap/opu/odata/UI2/PAGE_BUILDER_PERS/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed;boundary=batch_1a5e-ef42-0237", 
		"Body=--batch_1a5e-ef42-0237\r\nContent-Type: multipart/mixed; boundary=changeset_7445-b05e-72bf\r\n\r\n--changeset_7445-b05e-72bf\r\nContent-Type: application/http\r\nContent-Transfer-Encoding: binary\r\n\r\nPUT Properties(pageId='%2FUI2%2FPERSONALIZATION',bagId='sap.ushell.personalization%23sap.ushell.services.UserRecents',name='ITEM%23AppsUsage') HTTP/1.1\r\nAccept: application/atomsvc+xml;q=0.8, application/json;odata=fullmetadata;q=0.7, application/json;q=0.5, */*;q=0.1\r\nDataServiceVersion: "
		"1.0\r\nContent-Type: application/json\r\nMaxDataServiceVersion: 3.0\r\nContent-Length: 490\r\n\r\n{\"__metadata\":{\"type\":\"PAGE_BUILDER_PERS.Property\"},\"pageId\":\"/UI2/PERSONALIZATION\",\"bagId\":\"sap.ushell.personalization#sap.ushell.services.UserRecents\",\"name\":\"ITEM#AppsUsage\",\"value\":\"{\\\"recentDay\\\":\\\"2015/3/24\\\",\\\"recentAppsUsageMap\\\":{\\\"PurchaseOrder-track\\\":[4,2,2,9,19,14,6],\\\"PurchaseRequisition-approve\\\":[1,0,0,0,0,0,0],\\\"PurchaseContract-approve\\\":"
		"[1,0,0,0,0,0,0],\\\"Product-display\\\":[1,1,0,0,0],\\\"SalesOrder-track\\\":[3,0,0,0],\\\"SalesOrder-create\\\":[1,0,0,0]}}\",\"translatable\":\"\"}\r\n--changeset_7445-b05e-72bf--\r\n\r\n--batch_1a5e-ef42-0237--", 
		EXTRARES, 
		"Url=/sap/opu/odata/sap/SRA020_PO_TRACKING_SRV;mo/POLists?$skip=0&$top=100&$orderby=CreatedAt%20desc&$filter=CreatedAt%20gt%20%2720141224%27&$inlinecount=allpages&sap-client=100", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN#PurchaseOrder-track", ENDITEM, 
		LAST);

	lr_end_transaction("Display_filtered_result", LR_AUTO);

	return 0;
}