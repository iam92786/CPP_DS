#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
int area_of_tri(int a)
{
    
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    float p;
    float s;
    //float arr[100];
    
    for(int i = 0; i < n; i++)
    {
        //area of triangle
        p = (tr[i].a * tr[i].b * tr[3].c)/2;
        
        s = sqrtf(p* (p-tr[i].a) * (tr[i].b) * (tr[i].c));
        
        //arr[i] = s;
        
        
        //sorting algo
        for(int j = i+1; j < n; j++)
        {
            if(area_of_tri(tr[i]) )
            {
                
            }
        }            
    }
    
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    int count;
    scanf("%[^\n]%s",s);
    printf("%c",s[10]);   
    
    for (int i = 0; s[i]; i++) 
    {
        count = 0;
        if(s[i] > '0' && s[i] < '9')
        {
            printf("%c:",s[i]);
            for(int j = 0; s[j]; j++)
            {
                if(s[i] == s[j])
                {
                    count++;
                }
            }
        }
        printf("%d ",count);
    }
    return 0;
}

*/


/*

 #include <dt-bindings/clock/qcom,rpmh.h>
 #include <dt-bindings/interrupt-controller/arm-gic.h>

+#include "kona-iot-v2.1-vc.dtsi"
 #include "kona-ganga.dtsi"

 / {
diff --git a/devicetree/qcom/kona-ganga-pinctrl.dtsi b/devicetree/qcom/kona-ganga-pinctrl.dtsi
index 7a61874..9ef174a 100644
--- a/devicetree/qcom/kona-ganga-pinctrl.dtsi
+++ b/devicetree/qcom/kona-ganga-pinctrl.dtsi
@@ -89,6 +89,42 @@
                         };
                 };
         };
+       /* power on usb5744 hub on the carrier board */
+        usb5744_hub_3v3_pin: usb5744_hub_3v3_pin {
+                mux {
+                        pins = "gpio22";
+                        function = "gpio";
+                };
+
+                config {
+                        pins = "gpio22";
+                        drive-strength = <2>;
+                        bias-disable;
+                        output-enable;
+                        output-high;
+                };
+        };
+
+        /*
+         * To reset usb5744 hub on the carrier board.
+         * Set the gpio pin 115 to active low.
+         * Wait for 10ms.
+         * Set the gpio pin 115 to active high.
+         */
+        usb5744_hub_reset_pin: usb5744_hub_reset_pin {
+                mux {
+                        pins = "gpio115";
+                        function = "gpio";
+                };
+
+                config {
+                        pins = "gpio115";
+                        drive-strength = <2>;
+                        bias-disable;
+                        output-enable;
+                        output-high;
+                };
+        };

        mcu_som_power_control_pins: mcu_som_power_control_pins {
                 som_sleep_pin: som_sleep_pin {
diff --git a/devicetree/qcom/kona-ganga.dtsi b/devicetree/qcom/kona-ganga.dtsi
index 32b5823..6bbd4a8 100644
--- a/devicetree/qcom/kona-ganga.dtsi
+++ b/devicetree/qcom/kona-ganga.dtsi
@@ -1,6 +1,5 @@

 #include "kona-hdk.dtsi"
-
 #include "kona-ganga-pinctrl.dtsi"

 &qupv3_se16_i2c {
@@ -68,3 +67,9 @@
        status = "okay";
 };

+&usb0 {
+        pinctrl-names = "default";
+        pinctrl-0 = <&usb5744_hub_3v3_pin
+                     &usb5744_hub_reset_pin>;
+};
+
*/