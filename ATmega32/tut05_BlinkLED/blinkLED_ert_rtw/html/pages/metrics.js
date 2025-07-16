function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtDW"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut05_BlinkLED\\blinkLED_ert_rtw\\blinkLED.c",
	size: 4};
	 this.metricsArray.var["rtY"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut05_BlinkLED\\blinkLED_ert_rtw\\blinkLED.c",
	size: 1};
	 this.metricsArray.fcn["blinkLEDFucn"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut05_BlinkLED\\blinkLED_ert_rtw\\blinkLEDFucn.c",
	stack: 5,
	stackTotal: 5};
	 this.metricsArray.fcn["blinkLED_initialize"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut05_BlinkLED\\blinkLED_ert_rtw\\blinkLED.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["blinkLED_step"] = {file: "D:\\ME\\Career\\04.MBD\\Projects\\hardware\\ATmega32\\tut05_BlinkLED\\blinkLED_ert_rtw\\blinkLED.c",
	stack: 0,
	stackTotal: 5};
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
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'blinkLED_metrics\'});">Global Memory: 5(bytes) Maximum Stack: 5(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
