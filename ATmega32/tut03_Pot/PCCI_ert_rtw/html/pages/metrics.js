function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtU"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut03\\PCCI_ert_rtw\\PCCI.c",
	size: 2};
	 this.metricsArray.var["rtY"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut03\\PCCI_ert_rtw\\PCCI.c",
	size: 1};
	 this.metricsArray.fcn["PCCI_initialize"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut03\\PCCI_ert_rtw\\PCCI.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["PCCI_step"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut03\\PCCI_ert_rtw\\PCCI.c",
	stack: 0,
	stackTotal: 4};
	 this.metricsArray.fcn["lampLogicFunc"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut03\\PCCI_ert_rtw\\lampLogicFunc.c",
	stack: 4,
	stackTotal: 4};
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'PCCI_metrics\'});">Global Memory: 3(bytes) Maximum Stack: 4(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
