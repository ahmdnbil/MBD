function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["DIOD.c:DIOD_M_"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut01\\DIOD_ert_rtw\\DIOD.c",
	size: 8};
	 this.metricsArray.var["DIOD_U"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut01\\DIOD_ert_rtw\\DIOD.c",
	size: 1};
	 this.metricsArray.var["DIOD_Y"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut01\\DIOD_ert_rtw\\DIOD.c",
	size: 1};
	 this.metricsArray.fcn["DIOD_indicatorLampFunc"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut01\\DIOD_ert_rtw\\indicatorLampFunc.c",
	stack: 2,
	stackTotal: 2};
	 this.metricsArray.fcn["DIOD_initialize"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut01\\DIOD_ert_rtw\\DIOD.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["DIOD_step"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut01\\DIOD_ert_rtw\\DIOD.c",
	stack: 0,
	stackTotal: 2};
	 this.metricsArray.fcn["DIOD_terminate"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut01\\DIOD_ert_rtw\\DIOD.c",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'DIOD_metrics\'});">Global Memory: 10(bytes) Maximum Stack: 2(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
