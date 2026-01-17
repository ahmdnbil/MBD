function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtU"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut04_LDR\\LDR_ert_rtw\\LDR.c",
	size: 2};
	 this.metricsArray.var["rtY"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut04_LDR\\LDR_ert_rtw\\LDR.c",
	size: 3};
	 this.metricsArray.fcn["LDR_initialize"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut04_LDR\\LDR_ert_rtw\\LDR.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["LDR_step"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut04_LDR\\LDR_ert_rtw\\LDR.c",
	stack: 0,
	stackTotal: 9};
	 this.metricsArray.fcn["lampLogicFunc"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut04_LDR\\LDR_ert_rtw\\lampLogicFunc.c",
	stack: 9,
	stackTotal: 9};
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'LDR_metrics\'});">Global Memory: 5(bytes) Maximum Stack: 9(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
