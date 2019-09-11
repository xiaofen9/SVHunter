#!/bin/bash

if [ $1 == "onos" ]
then
	cp tp_onos.txt tp.txt
	echo 'if $dp::VersionNum -> read $var_998 then $net_svc::ovsdb -> crash $var_998' >> $2
	echo 'if $http_api::devices.{id} -> read $var_999 then $http_api::. -> write $var_999' >> $2
	python reasoning.py $2
	java -jar reasoning.jar $2
elif [ $1 == "fl" ]
then
	cp tp_fl.txt tp.txt
	echo 'if $http_api::wm.device -> read $var_999 then $http_api::. -> write $var_999' >> $2
	echo 'if $dp::OFFeatureReply -> write $var_997 then $http_api::wm.device -> write $var_997' >> $2
	python reasoning.py $2
	java -jar reasoning.jar $2
elif [ $1 == "odl" ]
then
	python reasoning.py $2
	java -jar reasoning.jar $2
fi

dot -Tpdf results/output.dot -o results/output.pdf
