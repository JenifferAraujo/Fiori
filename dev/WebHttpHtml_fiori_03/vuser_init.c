vuser_init()
{
	
	web_set_sockets_option("SSL_VERSION", "TLS");

	web_add_cookie("Active=true; DOMAIN=fioripoc.avnet.com");

	//<input type="hidden" name="sap-login-XSRF" value="NDq-xY5HmGBWHnWIPbmJZnFYNtPFUZE1NjbCEpP21jI&#x3d;">
	web_reg_save_param_ex(
		"ParamName=sap-login-XSRF",
		"LB=\"sap-login-XSRF\" value=\"",
		"RB=&#",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);

	web_url("FioriLaunchpad.html", 
		"URL=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sap/public/bc/ur/Design2002/themes/sap_tradeshow/common/focus/focus.gif?6.0.16.0.0", ENDITEM, 
		"Url=/sap/public/bc/ur/Design2002/themes/sap_tradeshow/common/loading/loading_ani.gif?6.0.16.0.0", ENDITEM, 
		"Url=/sap/public/bc/ur/Design2002/themes/sap_tradeshow/common/label/3x1_label_designbar.gif?6.0.16.0.0", ENDITEM, 
		"Url=/sap/public/bc/ur/Design2002/themes/sap_tradeshow/common/button/6x1_btn_emph.gif?6.0.16.0.0", ENDITEM, 
		LAST);

	lr_start_transaction("Logon");

	web_submit_data("FioriLaunchpad.html_2", 
		"Action=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sap-system-login-oninputprocessing", "Value=onLogin", ENDITEM, 
		"Name=sap-urlscheme", "Value=", ENDITEM, 
		"Name=sap-system-login", "Value=onLogin", ENDITEM, 
		"Name=sap-system-login-basic_auth", "Value=", ENDITEM, 
		"Name=sap-client", "Value=100", ENDITEM, 
		"Name=sap-language", "Value=EN", ENDITEM, 
		"Name=sap-accessibility", "Value=", ENDITEM, 
		"Name=sap-login-XSRF", "Value={sap-login-XSRF}=", ENDITEM, 
		"Name=sap-system-login-cookie_disabled", "Value=", ENDITEM, 
		"Name=sap-user", "Value=035741", ENDITEM, 
		"Name=sap-password", "Value=chacha02", ENDITEM, 
		EXTRARES, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ushell_abap/bootstrap/abap.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-0.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui2/start_up?sap-language=EN&sap-client=100&shellType=FLP&depth=0", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/PageSets('%2FUI2%2FFiori2LaunchpadHome')?$expand=Pages/PageChipInstances/Chip/ChipBags/ChipProperties,Pages/PageChipInstances/RemoteCatalog,Pages/PageChipInstances/ChipInstanceBags/ChipInstanceProperties,AssignedPages,DefaultPage", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/INTEROP/TargetMappings", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-1.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-2.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/core-min-3.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/public/bc/themes/~client-100/~cache-ug1SBGXW3G6QNOfeuK1vDcDRTY0/UI5/sap/fiori/themes/avnetT1/library.css", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ushell_abap/library-preload.json", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/fiori/messagebundle-preload_en.js", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/public/bc/themes/~client-100/~cache-ug1SBGXW3G6QNOfeuK1vDcDRTY0/UI5/sap/fiori/themes/avnetT1/library-parameters.json", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ushell/themes/base/img/launchpad_favicon.ico", "Referer=", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3AAvnetFioriTSCat%3A4E2XO3N4BMV4WO4ATEWY9X6F1')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3ASAP_SD_BC_FIELDSALESREP_X1%3A00O2TO88JXF3QEA6P9GUUBXCY%3ACONFIGURATION')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3ASAP_MM_BC_Buyer_X1%3A00O2TO88JXF3QD390V5KG8PXJ')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3ASAP_SD_BC_FIELDSALESREP_X1%3A00O2TO88JXF3QEA6D9ZF40DC3')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3ASAP_SD_BC_FIELDSALESREP_X1%3A00O2TO88JXF3QEA6HD20TT3EZ%3ACONFIGURATION')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3ASAP_SD_BC_FIELDSALESREP_X1%3A00O2TO88JXF3QEA6D9ZF40DC3%3ACONFIGURATION')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/sap/ui/core/themes/base/fonts/SAP-icons.eot?", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/public/bc/themes/~client-100/~cache-1424965955930/UI5/sap/fiori/themes/avnetT1/img/misc/sapUiGlobalLogo.jpeg", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		"Url=/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Chips('X-SAP-UI2-PAGE%3AX-SAP-UI2-CATALOGPAGE%3ASAP_SD_BC_FIELDSALESREP_X1%3A00O2TO88JXF3QEA7QJ3TAJCHP%3ACONFIGURATION')?$expand=ChipBags/ChipProperties", "Referer=https://fioripoc.avnet.com:8443/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html?sap-client=100&sap-language=EN", ENDITEM, 
		LAST);

	lr_end_transaction("Logon", LR_AUTO);

	return 0;
}
