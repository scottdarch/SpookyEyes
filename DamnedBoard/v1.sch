<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="8.3.1">
<drawing>
<settings>
<setting alwaysvectorfont="yes"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="50" name="dxf" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="53" name="tGND_GNDA" color="7" fill="9" visible="no" active="no"/>
<layer number="54" name="bGND_GNDA" color="1" fill="9" visible="no" active="no"/>
<layer number="56" name="wert" color="7" fill="1" visible="no" active="no"/>
<layer number="57" name="tCAD" color="7" fill="1" visible="no" active="no"/>
<layer number="59" name="tCarbon" color="7" fill="1" visible="no" active="no"/>
<layer number="60" name="bCarbon" color="7" fill="1" visible="no" active="no"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
<layer number="99" name="SpiceOrder" color="7" fill="1" visible="yes" active="yes"/>
<layer number="100" name="Muster" color="7" fill="1" visible="no" active="no"/>
<layer number="101" name="Patch_Top" color="12" fill="4" visible="yes" active="yes"/>
<layer number="102" name="Vscore" color="7" fill="1" visible="yes" active="yes"/>
<layer number="103" name="tMap" color="7" fill="1" visible="yes" active="yes"/>
<layer number="104" name="Name" color="16" fill="1" visible="yes" active="yes"/>
<layer number="105" name="tPlate" color="7" fill="1" visible="yes" active="yes"/>
<layer number="106" name="bPlate" color="7" fill="1" visible="yes" active="yes"/>
<layer number="107" name="Crop" color="7" fill="1" visible="yes" active="yes"/>
<layer number="108" name="tplace-old" color="10" fill="1" visible="yes" active="yes"/>
<layer number="109" name="ref-old" color="11" fill="1" visible="yes" active="yes"/>
<layer number="110" name="fp0" color="7" fill="1" visible="yes" active="yes"/>
<layer number="111" name="LPC17xx" color="7" fill="1" visible="yes" active="yes"/>
<layer number="112" name="tSilk" color="7" fill="1" visible="yes" active="yes"/>
<layer number="113" name="IDFDebug" color="4" fill="1" visible="yes" active="yes"/>
<layer number="114" name="Badge_Outline" color="7" fill="1" visible="yes" active="yes"/>
<layer number="115" name="ReferenceISLANDS" color="7" fill="1" visible="yes" active="yes"/>
<layer number="116" name="Patch_BOT" color="9" fill="4" visible="yes" active="yes"/>
<layer number="118" name="Rect_Pads" color="7" fill="1" visible="yes" active="yes"/>
<layer number="121" name="_tsilk" color="7" fill="1" visible="yes" active="yes"/>
<layer number="122" name="_bsilk" color="7" fill="1" visible="yes" active="yes"/>
<layer number="123" name="tTestmark" color="7" fill="1" visible="yes" active="yes"/>
<layer number="124" name="bTestmark" color="7" fill="1" visible="yes" active="yes"/>
<layer number="125" name="_tNames" color="7" fill="1" visible="yes" active="yes"/>
<layer number="126" name="_bNames" color="7" fill="1" visible="yes" active="yes"/>
<layer number="127" name="_tValues" color="7" fill="1" visible="yes" active="yes"/>
<layer number="128" name="_bValues" color="7" fill="1" visible="yes" active="yes"/>
<layer number="129" name="Mask" color="7" fill="1" visible="yes" active="yes"/>
<layer number="131" name="tAdjust" color="7" fill="1" visible="yes" active="yes"/>
<layer number="132" name="bAdjust" color="7" fill="1" visible="yes" active="yes"/>
<layer number="144" name="Drill_legend" color="7" fill="1" visible="yes" active="yes"/>
<layer number="150" name="Notes" color="7" fill="1" visible="yes" active="yes"/>
<layer number="151" name="HeatSink" color="7" fill="1" visible="yes" active="yes"/>
<layer number="152" name="_bDocu" color="7" fill="1" visible="yes" active="yes"/>
<layer number="153" name="FabDoc1" color="7" fill="1" visible="yes" active="yes"/>
<layer number="154" name="FabDoc2" color="7" fill="1" visible="yes" active="yes"/>
<layer number="155" name="FabDoc3" color="7" fill="1" visible="yes" active="yes"/>
<layer number="199" name="Contour" color="7" fill="1" visible="yes" active="yes"/>
<layer number="200" name="200bmp" color="1" fill="10" visible="no" active="no"/>
<layer number="201" name="201bmp" color="2" fill="10" visible="yes" active="yes"/>
<layer number="202" name="202bmp" color="3" fill="10" visible="yes" active="yes"/>
<layer number="203" name="203bmp" color="4" fill="10" visible="yes" active="yes"/>
<layer number="204" name="204bmp" color="5" fill="10" visible="yes" active="yes"/>
<layer number="205" name="205bmp" color="6" fill="10" visible="yes" active="yes"/>
<layer number="206" name="206bmp" color="7" fill="10" visible="yes" active="yes"/>
<layer number="207" name="207bmp" color="8" fill="10" visible="yes" active="yes"/>
<layer number="208" name="208bmp" color="9" fill="10" visible="yes" active="yes"/>
<layer number="209" name="209bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="210" name="210bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="211" name="211bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="212" name="212bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="213" name="213bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="214" name="214bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="215" name="215bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="216" name="216bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="217" name="217bmp" color="18" fill="1" visible="no" active="no"/>
<layer number="218" name="218bmp" color="19" fill="1" visible="no" active="no"/>
<layer number="219" name="219bmp" color="20" fill="1" visible="no" active="no"/>
<layer number="220" name="220bmp" color="21" fill="1" visible="no" active="no"/>
<layer number="221" name="221bmp" color="22" fill="1" visible="no" active="no"/>
<layer number="222" name="222bmp" color="23" fill="1" visible="no" active="no"/>
<layer number="223" name="223bmp" color="24" fill="1" visible="no" active="no"/>
<layer number="224" name="224bmp" color="25" fill="1" visible="no" active="no"/>
<layer number="225" name="225bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="226" name="226bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="227" name="227bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="228" name="228bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="229" name="229bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="230" name="230bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="231" name="231bmp" color="7" fill="1" visible="yes" active="yes"/>
<layer number="232" name="Eagle3D_PG2" color="7" fill="1" visible="yes" active="yes"/>
<layer number="233" name="Eagle3D_PG3" color="7" fill="1" visible="yes" active="yes"/>
<layer number="248" name="Housing" color="7" fill="1" visible="yes" active="yes"/>
<layer number="249" name="Edge" color="7" fill="1" visible="yes" active="yes"/>
<layer number="250" name="Descript" color="3" fill="1" visible="no" active="no"/>
<layer number="251" name="SMDround" color="12" fill="11" visible="no" active="no"/>
<layer number="254" name="cooling" color="7" fill="1" visible="yes" active="yes"/>
<layer number="255" name="routoute" color="7" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="TagConnect">
<packages>
<package name="TC2050-IDC">
<smd name="2" x="-2.54" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="1" x="-2.54" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="4" x="-1.27" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="3" x="-1.27" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="6" x="0" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="5" x="0" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="7" x="1.27" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="8" x="1.27" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="10" x="2.54" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="9" x="2.54" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<rectangle x1="-2.54" y1="-0.635" x2="2.54" y2="0.635" layer="41"/>
<hole x="-3.81" y="0" drill="0.9906"/>
<hole x="3.81" y="1.016" drill="0.9906"/>
<hole x="3.81" y="-1.016" drill="0.9906"/>
<hole x="-3.81" y="2.54" drill="2.3749"/>
<hole x="-3.81" y="-2.54" drill="2.3749"/>
<hole x="1.905" y="2.54" drill="2.3749"/>
<hole x="1.905" y="-2.54" drill="2.3749"/>
<rectangle x1="-4.5847" y1="-5.14985" x2="-3.0353" y2="-2.54" layer="40"/>
<rectangle x1="1.1303" y1="-5.14985" x2="2.6797" y2="-2.54" layer="40"/>
<rectangle x1="-4.5847" y1="2.54" x2="-3.0353" y2="5.14985" layer="40"/>
<rectangle x1="1.1303" y1="2.54" x2="2.6797" y2="5.14985" layer="40"/>
<text x="-5.715" y="-2.54" size="1.27" layer="27" rot="R90">&gt;VALUE</text>
<text x="6.35" y="-2.54" size="1.27" layer="25" rot="R90">&gt;NAME</text>
</package>
<package name="TC2050-IDC-NL">
<smd name="2" x="-2.54" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="1" x="-2.54" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="4" x="-1.27" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="3" x="-1.27" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="6" x="0" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="5" x="0" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="7" x="1.27" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="8" x="1.27" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="10" x="2.54" y="0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<smd name="9" x="2.54" y="-0.635" dx="0.7874" dy="0.7874" layer="1" roundness="100"/>
<rectangle x1="-2.54" y1="-0.635" x2="2.54" y2="0.635" layer="41"/>
<hole x="-3.81" y="0" drill="0.9906"/>
<hole x="3.81" y="1.016" drill="0.9906"/>
<hole x="3.81" y="-1.016" drill="0.9906"/>
<text x="-4.445" y="-3.175" size="1.27" layer="27">&gt;VALUE</text>
<text x="-4.445" y="1.905" size="1.27" layer="25">&gt;NAME</text>
</package>
</packages>
<symbols>
<symbol name="TC2050-IDC">
<wire x1="3.81" y1="-7.62" x2="-3.81" y2="-7.62" width="0.4064" layer="94"/>
<wire x1="1.27" y1="0" x2="2.54" y2="0" width="0.6096" layer="94"/>
<wire x1="1.27" y1="-2.54" x2="2.54" y2="-2.54" width="0.6096" layer="94"/>
<wire x1="1.27" y1="-5.08" x2="2.54" y2="-5.08" width="0.6096" layer="94"/>
<wire x1="-2.54" y1="0" x2="-1.27" y2="0" width="0.6096" layer="94"/>
<wire x1="-2.54" y1="-2.54" x2="-1.27" y2="-2.54" width="0.6096" layer="94"/>
<wire x1="-2.54" y1="-5.08" x2="-1.27" y2="-5.08" width="0.6096" layer="94"/>
<wire x1="-3.81" y1="7.62" x2="-3.81" y2="-7.62" width="0.4064" layer="94"/>
<wire x1="3.81" y1="-7.62" x2="3.81" y2="7.62" width="0.4064" layer="94"/>
<wire x1="-3.81" y1="7.62" x2="3.81" y2="7.62" width="0.4064" layer="94"/>
<wire x1="1.27" y1="5.08" x2="2.54" y2="5.08" width="0.6096" layer="94"/>
<wire x1="1.27" y1="2.54" x2="2.54" y2="2.54" width="0.6096" layer="94"/>
<wire x1="-2.54" y1="5.08" x2="-1.27" y2="5.08" width="0.6096" layer="94"/>
<wire x1="-2.54" y1="2.54" x2="-1.27" y2="2.54" width="0.6096" layer="94"/>
<text x="-3.81" y="-10.16" size="1.778" layer="96">&gt;VALUE</text>
<text x="-3.81" y="8.382" size="1.778" layer="95">&gt;NAME</text>
<pin name="1" x="7.62" y="-5.08" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="3" x="7.62" y="-2.54" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="5" x="7.62" y="0" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="2" x="-7.62" y="-5.08" visible="pad" length="middle" direction="pas" swaplevel="1"/>
<pin name="4" x="-7.62" y="-2.54" visible="pad" length="middle" direction="pas" swaplevel="1"/>
<pin name="6" x="-7.62" y="0" visible="pad" length="middle" direction="pas" swaplevel="1"/>
<pin name="7" x="7.62" y="2.54" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="9" x="7.62" y="5.08" visible="pad" length="middle" direction="pas" swaplevel="1" rot="R180"/>
<pin name="8" x="-7.62" y="2.54" visible="pad" length="middle" direction="pas" swaplevel="1"/>
<pin name="10" x="-7.62" y="5.08" visible="pad" length="middle" direction="pas" swaplevel="1"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="TC2050-IDC" prefix="TC">
<description>Tag-Connect In Circuit Programming &amp; Debug Cable 10 Pin
http://www.tag-connect.com</description>
<gates>
<gate name="A" symbol="TC2050-IDC" x="0" y="0"/>
</gates>
<devices>
<device name="" package="TC2050-IDC">
<connects>
<connect gate="A" pin="1" pad="1"/>
<connect gate="A" pin="10" pad="10"/>
<connect gate="A" pin="2" pad="2"/>
<connect gate="A" pin="3" pad="3"/>
<connect gate="A" pin="4" pad="4"/>
<connect gate="A" pin="5" pad="5"/>
<connect gate="A" pin="6" pad="6"/>
<connect gate="A" pin="7" pad="7"/>
<connect gate="A" pin="8" pad="8"/>
<connect gate="A" pin="9" pad="9"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
<device name="-NL" package="TC2050-IDC-NL">
<connects>
<connect gate="A" pin="1" pad="1"/>
<connect gate="A" pin="10" pad="10"/>
<connect gate="A" pin="2" pad="2"/>
<connect gate="A" pin="3" pad="3"/>
<connect gate="A" pin="4" pad="4"/>
<connect gate="A" pin="5" pad="5"/>
<connect gate="A" pin="6" pad="6"/>
<connect gate="A" pin="7" pad="7"/>
<connect gate="A" pin="8" pad="8"/>
<connect gate="A" pin="9" pad="9"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="boneyard">
<packages>
<package name="21-0490D" urn="urn:adsk.eagle:footprint:291616/1">
<smd name="1" x="-1.016" y="0.65" dx="0.6604" dy="0.3048" layer="1"/>
<smd name="2" x="-1.016" y="0" dx="0.6604" dy="0.3048" layer="1"/>
<smd name="3" x="-1.016" y="-0.65" dx="0.6604" dy="0.3048" layer="1"/>
<smd name="4" x="1.016" y="-0.65" dx="0.6604" dy="0.3048" layer="1"/>
<smd name="5" x="1.016" y="0" dx="0.6604" dy="0.3048" layer="1"/>
<smd name="6" x="1.016" y="0.65" dx="0.6604" dy="0.3048" layer="1"/>
<smd name="7" x="0" y="0" dx="0.762" dy="1.4478" layer="1" cream="no"/>
<polygon width="0.0254" layer="31">
<vertex x="-0.381" y="0.7239"/>
<vertex x="-0.381" y="-0.7239"/>
<vertex x="0.381" y="-0.7239"/>
<vertex x="0.381" y="0.7239"/>
</polygon>
<wire x1="-1.1684" y1="-1.1684" x2="1.1684" y2="-1.1684" width="0.1524" layer="21"/>
<wire x1="1.1684" y1="1.1684" x2="-1.1684" y2="1.1684" width="0.1524" layer="21"/>
<wire x1="-1.7018" y1="0.6604" x2="-1.8542" y2="0.6604" width="0.1524" layer="21" curve="-180"/>
<wire x1="-1.8542" y1="0.6604" x2="-1.7018" y2="0.6604" width="0.1524" layer="21" curve="-180"/>
<wire x1="-1.0414" y1="-1.0414" x2="1.0414" y2="-1.0414" width="0.1524" layer="51"/>
<wire x1="1.0414" y1="-1.0414" x2="1.0414" y2="1.0414" width="0.1524" layer="51"/>
<wire x1="1.0414" y1="1.0414" x2="-1.0414" y2="1.0414" width="0.1524" layer="51"/>
<wire x1="-1.0414" y1="1.0414" x2="-1.0414" y2="-1.0414" width="0.1524" layer="51"/>
<text x="-3.2766" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;Name</text>
</package>
<package name="21-0490D-M" urn="urn:adsk.eagle:footprint:291617/1">
<smd name="1" x="-1.0668" y="0.65" dx="0.762" dy="0.3048" layer="1"/>
<smd name="2" x="-1.0668" y="0" dx="0.762" dy="0.3048" layer="1"/>
<smd name="3" x="-1.0668" y="-0.65" dx="0.762" dy="0.3048" layer="1"/>
<smd name="4" x="1.0668" y="-0.65" dx="0.762" dy="0.3048" layer="1"/>
<smd name="5" x="1.0668" y="0" dx="0.762" dy="0.3048" layer="1"/>
<smd name="6" x="1.0668" y="0.65" dx="0.762" dy="0.3048" layer="1"/>
<smd name="7" x="0" y="0" dx="0.762" dy="1.4478" layer="1" cream="no"/>
<polygon width="0.0254" layer="31">
<vertex x="-0.381" y="0.7239"/>
<vertex x="-0.381" y="-0.7239"/>
<vertex x="0.381" y="-0.7239"/>
<vertex x="0.381" y="0.7239"/>
</polygon>
<wire x1="-1.1684" y1="-1.1684" x2="1.1684" y2="-1.1684" width="0.1524" layer="21"/>
<wire x1="1.1684" y1="1.1684" x2="-1.1684" y2="1.1684" width="0.1524" layer="21"/>
<wire x1="-1.8034" y1="0.6604" x2="-1.9558" y2="0.6604" width="0.1524" layer="21" curve="-180"/>
<wire x1="-1.9558" y1="0.6604" x2="-1.8034" y2="0.6604" width="0.1524" layer="21" curve="-180"/>
<wire x1="-1.0414" y1="-1.0414" x2="1.0414" y2="-1.0414" width="0.1524" layer="51"/>
<wire x1="1.0414" y1="-1.0414" x2="1.0414" y2="1.0414" width="0.1524" layer="51"/>
<wire x1="1.0414" y1="1.0414" x2="-1.0414" y2="1.0414" width="0.1524" layer="51"/>
<wire x1="-1.0414" y1="1.0414" x2="-1.0414" y2="-1.0414" width="0.1524" layer="51"/>
<text x="-3.2766" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;Name</text>
</package>
<package name="21-0490D-L" urn="urn:adsk.eagle:footprint:291618/1">
<smd name="1" x="-0.9652" y="0.65" dx="0.5588" dy="0.3048" layer="1"/>
<smd name="2" x="-0.9652" y="0" dx="0.5588" dy="0.3048" layer="1"/>
<smd name="3" x="-0.9652" y="-0.65" dx="0.5588" dy="0.3048" layer="1"/>
<smd name="4" x="0.9652" y="-0.65" dx="0.5588" dy="0.3048" layer="1"/>
<smd name="5" x="0.9652" y="0" dx="0.5588" dy="0.3048" layer="1"/>
<smd name="6" x="0.9652" y="0.65" dx="0.5588" dy="0.3048" layer="1"/>
<smd name="7" x="0" y="0" dx="0.762" dy="1.4478" layer="1" cream="no"/>
<polygon width="0.0254" layer="31">
<vertex x="-0.381" y="0.7239"/>
<vertex x="-0.381" y="-0.7239"/>
<vertex x="0.381" y="-0.7239"/>
<vertex x="0.381" y="0.7239"/>
</polygon>
<wire x1="-1.1684" y1="-1.1684" x2="1.1684" y2="-1.1684" width="0.1524" layer="21"/>
<wire x1="1.1684" y1="1.1684" x2="-1.1684" y2="1.1684" width="0.1524" layer="21"/>
<wire x1="-1.6002" y1="0.6604" x2="-1.7526" y2="0.6604" width="0.1524" layer="21" curve="-180"/>
<wire x1="-1.7526" y1="0.6604" x2="-1.6002" y2="0.6604" width="0.1524" layer="21" curve="-180"/>
<wire x1="-1.0414" y1="-1.0414" x2="1.0414" y2="-1.0414" width="0.1524" layer="51"/>
<wire x1="1.0414" y1="-1.0414" x2="1.0414" y2="1.0414" width="0.1524" layer="51"/>
<wire x1="1.0414" y1="1.0414" x2="-1.0414" y2="1.0414" width="0.1524" layer="51"/>
<wire x1="-1.0414" y1="1.0414" x2="-1.0414" y2="-1.0414" width="0.1524" layer="51"/>
<text x="-3.2766" y="-0.635" size="1.27" layer="25" ratio="6" rot="SR0">&gt;Name</text>
</package>
<package name="QFN-24">
<smd name="1" x="0.04" y="-0.915" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="-0.42" y1="-1.125" x2="0.5" y2="-0.705" layer="29"/>
<rectangle x1="-0.31" y1="-1.015" x2="0.39" y2="-0.815" layer="31"/>
<smd name="2" x="0.04" y="-1.565" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="-0.42" y1="-1.775" x2="0.5" y2="-1.355" layer="29"/>
<rectangle x1="-0.31" y1="-1.665" x2="0.39" y2="-1.465" layer="31"/>
<smd name="3" x="0.04" y="-2.215" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="-0.42" y1="-2.425" x2="0.5" y2="-2.005" layer="29"/>
<rectangle x1="-0.31" y1="-2.315" x2="0.39" y2="-2.115" layer="31"/>
<smd name="4" x="0.04" y="-2.865" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="-0.42" y1="-3.075" x2="0.5" y2="-2.655" layer="29"/>
<rectangle x1="-0.31" y1="-2.965" x2="0.39" y2="-2.765" layer="31"/>
<smd name="5" x="0.04" y="-3.515" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="-0.42" y1="-3.725" x2="0.5" y2="-3.305" layer="29"/>
<rectangle x1="-0.31" y1="-3.615" x2="0.39" y2="-3.415" layer="31"/>
<smd name="6" x="0.04" y="-4.165" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="-0.42" y1="-4.375" x2="0.5" y2="-3.955" layer="29"/>
<rectangle x1="-0.31" y1="-4.265" x2="0.39" y2="-4.065" layer="31"/>
<smd name="7" x="0.915" y="-5.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="0.705" y1="-5.5" x2="1.125" y2="-4.58" layer="29"/>
<rectangle x1="0.815" y1="-5.39" x2="1.015" y2="-4.69" layer="31"/>
<smd name="8" x="1.565" y="-5.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="1.355" y1="-5.5" x2="1.775" y2="-4.58" layer="29"/>
<rectangle x1="1.465" y1="-5.39" x2="1.665" y2="-4.69" layer="31"/>
<smd name="9" x="2.215" y="-5.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="2.005" y1="-5.5" x2="2.425" y2="-4.58" layer="29"/>
<rectangle x1="2.115" y1="-5.39" x2="2.315" y2="-4.69" layer="31"/>
<smd name="10" x="2.865" y="-5.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="2.655" y1="-5.5" x2="3.075" y2="-4.58" layer="29"/>
<rectangle x1="2.765" y1="-5.39" x2="2.965" y2="-4.69" layer="31"/>
<smd name="11" x="3.515" y="-5.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="3.305" y1="-5.5" x2="3.725" y2="-4.58" layer="29"/>
<rectangle x1="3.415" y1="-5.39" x2="3.615" y2="-4.69" layer="31"/>
<smd name="12" x="4.165" y="-5.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="3.955" y1="-5.5" x2="4.375" y2="-4.58" layer="29"/>
<rectangle x1="4.065" y1="-5.39" x2="4.265" y2="-4.69" layer="31"/>
<smd name="13" x="5.04" y="-4.165" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="4.58" y1="-4.375" x2="5.5" y2="-3.955" layer="29"/>
<rectangle x1="4.69" y1="-4.265" x2="5.39" y2="-4.065" layer="31"/>
<smd name="14" x="5.04" y="-3.515" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="4.58" y1="-3.725" x2="5.5" y2="-3.305" layer="29"/>
<rectangle x1="4.69" y1="-3.615" x2="5.39" y2="-3.415" layer="31"/>
<smd name="15" x="5.04" y="-2.865" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="4.58" y1="-3.075" x2="5.5" y2="-2.655" layer="29"/>
<rectangle x1="4.69" y1="-2.965" x2="5.39" y2="-2.765" layer="31"/>
<smd name="16" x="5.04" y="-2.215" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="4.58" y1="-2.425" x2="5.5" y2="-2.005" layer="29"/>
<rectangle x1="4.69" y1="-2.315" x2="5.39" y2="-2.115" layer="31"/>
<smd name="17" x="5.04" y="-1.565" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="4.58" y1="-1.775" x2="5.5" y2="-1.355" layer="29"/>
<rectangle x1="4.69" y1="-1.665" x2="5.39" y2="-1.465" layer="31"/>
<smd name="18" x="5.04" y="-0.915" dx="0.8" dy="0.3" layer="1" stop="no" cream="no"/>
<rectangle x1="4.58" y1="-1.125" x2="5.5" y2="-0.705" layer="29"/>
<rectangle x1="4.69" y1="-1.015" x2="5.39" y2="-0.815" layer="31"/>
<smd name="19" x="4.165" y="-0.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="3.955" y1="-0.5" x2="4.375" y2="0.42" layer="29"/>
<rectangle x1="4.065" y1="-0.39" x2="4.265" y2="0.31" layer="31"/>
<smd name="20" x="3.515" y="-0.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="3.305" y1="-0.5" x2="3.725" y2="0.42" layer="29"/>
<rectangle x1="3.415" y1="-0.39" x2="3.615" y2="0.31" layer="31"/>
<smd name="21" x="2.865" y="-0.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="2.655" y1="-0.5" x2="3.075" y2="0.42" layer="29"/>
<rectangle x1="2.765" y1="-0.39" x2="2.965" y2="0.31" layer="31"/>
<smd name="22" x="2.215" y="-0.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="2.005" y1="-0.5" x2="2.425" y2="0.42" layer="29"/>
<rectangle x1="2.115" y1="-0.39" x2="2.315" y2="0.31" layer="31"/>
<smd name="23" x="1.565" y="-0.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="1.355" y1="-0.5" x2="1.775" y2="0.42" layer="29"/>
<rectangle x1="1.465" y1="-0.39" x2="1.665" y2="0.31" layer="31"/>
<smd name="24" x="0.915" y="-0.04" dx="0.3" dy="0.8" layer="1" stop="no" cream="no"/>
<rectangle x1="0.705" y1="-0.5" x2="1.125" y2="0.42" layer="29"/>
<rectangle x1="0.815" y1="-0.39" x2="1.015" y2="0.31" layer="31"/>
<smd name="25" x="2.54" y="-2.54" dx="3.6" dy="3.6" layer="1" stop="no" cream="no"/>
<rectangle x1="0.68" y1="-4.4" x2="4.4" y2="-0.68" layer="29"/>
<rectangle x1="1.29" y1="-2.29" x2="2.29" y2="-1.29" layer="31"/>
<rectangle x1="1.29" y1="-3.79" x2="2.29" y2="-2.79" layer="31"/>
<rectangle x1="2.79" y1="-3.79" x2="3.79" y2="-2.79" layer="31"/>
<rectangle x1="2.79" y1="-2.29" x2="3.79" y2="-1.29" layer="31"/>
<wire x1="0.04" y1="-0.04" x2="5.04" y2="-0.04" width="0.2032" layer="51"/>
<wire x1="5.04" y1="-0.04" x2="5.04" y2="-5.04" width="0.2032" layer="51"/>
<wire x1="5.04" y1="-5.04" x2="0.04" y2="-5.04" width="0.2032" layer="51"/>
<wire x1="0.04" y1="-5.04" x2="0.04" y2="-0.04" width="0.2032" layer="51"/>
<wire x1="0.24" y1="-0.04" x2="0.04" y2="-0.24" width="0.2032" layer="51"/>
<wire x1="0.04" y1="-0.04" x2="0.6134" y2="-0.04" width="0.2032" layer="21"/>
<wire x1="0.04" y1="-0.04" x2="0.04" y2="-0.6134" width="0.2032" layer="21"/>
<wire x1="5.04" y1="-0.04" x2="4.4666" y2="-0.04" width="0.2032" layer="21"/>
<wire x1="5.04" y1="-0.04" x2="5.04" y2="-0.6134" width="0.2032" layer="21"/>
<wire x1="5.04" y1="-5.04" x2="4.4666" y2="-5.04" width="0.2032" layer="21"/>
<wire x1="5.04" y1="-5.04" x2="5.04" y2="-4.4666" width="0.2032" layer="21"/>
<wire x1="0.04" y1="-5.04" x2="0.6134" y2="-5.04" width="0.2032" layer="21"/>
<wire x1="0.04" y1="-5.04" x2="0.04" y2="-4.4666" width="0.2032" layer="21"/>
<wire x1="0.6134" y1="-0.04" x2="0.04" y2="-0.6134" width="0.2032" layer="21"/>
<text x="0.04" y="0.614" size="1.27" layer="25">&gt;NAME</text>
<text x="0.04" y="-5.694" size="1.27" layer="27" align="top-left">&gt;VALUE</text>
</package>
<package name="DAMNED_SILK">
<text x="11.25" y="0" size="1.5" layer="22" font="vector" ratio="15" rot="MR0">32bits.io</text>
<wire x1="-3" y1="7" x2="-0.5" y2="9" width="0.254" layer="22"/>
<wire x1="-0.5" y1="9" x2="2" y2="9.75" width="0.254" layer="22"/>
<wire x1="2" y1="9.75" x2="4.5" y2="8" width="0.254" layer="22"/>
<wire x1="4.5" y1="8" x2="5" y2="5" width="0.254" layer="22"/>
<wire x1="5" y1="5" x2="4.25" y2="3.5" width="0.254" layer="22"/>
<wire x1="4.25" y1="3.5" x2="1.5" y2="1.75" width="0.254" layer="22"/>
<wire x1="1.5" y1="1.75" x2="0" y2="1.5" width="0.254" layer="22"/>
<wire x1="0" y1="1.5" x2="-2.75" y2="3" width="0.254" layer="22"/>
<wire x1="-2.75" y1="3" x2="-3" y2="7" width="0.254" layer="22"/>
<wire x1="-0.5" y1="9" x2="4.5" y2="8" width="0.025" layer="22"/>
<wire x1="4.5" y1="8" x2="0" y2="5.5" width="0.025" layer="22"/>
<wire x1="0" y1="5.5" x2="-0.5" y2="9" width="0.025" layer="22"/>
<wire x1="-0.5" y1="9" x2="-1" y2="5.5" width="0.025" layer="22"/>
<wire x1="-1" y1="5.5" x2="0" y2="5.5" width="0.025" layer="22"/>
<wire x1="-1" y1="5.5" x2="-3" y2="7" width="0.025" layer="22"/>
<wire x1="-1" y1="5.5" x2="0" y2="1.5" width="0.025" layer="22"/>
<wire x1="0" y1="1.5" x2="0" y2="5.5" width="0.025" layer="22"/>
<wire x1="0" y1="5.5" x2="1.5" y2="1.75" width="0.025" layer="22"/>
<wire x1="4.5" y1="8" x2="4.25" y2="3.5" width="0.025" layer="22"/>
<circle x="-5" y="-2.5" radius="1.5" width="0.254" layer="22"/>
<text x="-4.2" y="-3.125" size="1.2" layer="22" font="vector" ratio="20" rot="MR0">CC</text>
<circle x="-1.25" y="-2.5" radius="1.5" width="0.254" layer="22"/>
<circle x="2.475" y="-2.5" radius="1.5" width="0.254" layer="22"/>
<polygon width="0.025" layer="22">
<vertex x="-1.05" y="-3.575"/>
<vertex x="-1.4" y="-3.575"/>
<vertex x="-1.4" y="-2.9"/>
<vertex x="-1.65" y="-2.9"/>
<vertex x="-1.65" y="-2.15" curve="-45"/>
<vertex x="-1.375" y="-1.925"/>
<vertex x="-1.075" y="-1.925" curve="-45"/>
<vertex x="-0.8" y="-2.175"/>
<vertex x="-0.8" y="-2.925"/>
<vertex x="-1.05" y="-2.925"/>
</polygon>
<polygon width="0.025" layer="22">
<vertex x="-1.375" y="-1.375"/>
<vertex x="-1.1" y="-1.375" curve="-90"/>
<vertex x="-1.1" y="-1.75"/>
<vertex x="-1.375" y="-1.75" curve="-90"/>
</polygon>
<polygon width="0.025" layer="22">
<vertex x="1.8" y="-2.75"/>
<vertex x="2.025" y="-2.75"/>
<vertex x="2.025" y="-2.95" curve="180"/>
<vertex x="2.975" y="-3"/>
<vertex x="2.975" y="-2" curve="180"/>
<vertex x="2.025" y="-2.075"/>
<vertex x="2.025" y="-2.1"/>
<vertex x="2.325" y="-2.1"/>
<vertex x="1.925" y="-2.575"/>
<vertex x="1.5" y="-2.1"/>
<vertex x="1.8" y="-2.1"/>
<vertex x="1.8" y="-2" curve="-180"/>
<vertex x="3.2" y="-2.175"/>
<vertex x="3.2" y="-2.925" curve="-180"/>
<vertex x="1.8" y="-2.975"/>
</polygon>
</package>
<package name="BATT-RETAINER-20MM" urn="urn:adsk.eagle:footprint:291619/1" locally_modified="yes">
<pad name="P$1" x="0" y="0" drill="1.016" diameter="2.286" thermals="no"/>
<pad name="P$2" x="0" y="-3.048" drill="1.016" diameter="2.286" thermals="no"/>
<pad name="P$3" x="20.828" y="0" drill="1.016" diameter="2.286" thermals="no"/>
<pad name="P$4" x="20.828" y="-3.048" drill="1.016" diameter="2.286" thermals="no"/>
<smd name="P$0" x="10.414" y="-1.524" dx="17.78" dy="17.78" layer="1" roundness="100"/>
</package>
</packages>
<packages3d>
<package3d name="21-0490D" urn="urn:adsk.eagle:package:291620/2" type="box">
</package3d>
<package3d name="21-0490D-M" urn="urn:adsk.eagle:package:291621/2" type="box">
</package3d>
<package3d name="21-0490D-L" urn="urn:adsk.eagle:package:291622/2" type="box">
</package3d>
<package3d name="BATT-RETAINER-20MM" urn="urn:adsk.eagle:package:291704/2" type="box">
</package3d>
</packages3d>
<symbols>
<symbol name="MAX44009EDT+T" urn="urn:adsk.eagle:symbol:291615/1">
<pin name="VCC" x="2.54" y="0" length="middle" direction="pwr"/>
<pin name="GND" x="2.54" y="-2.54" length="middle" direction="pwr"/>
<pin name="A0" x="2.54" y="-5.08" length="middle" direction="pas"/>
<pin name="INT" x="53.34" y="-7.62" length="middle" direction="out" rot="R180"/>
<pin name="SCL" x="53.34" y="-5.08" length="middle" direction="pas" rot="R180"/>
<pin name="SDA" x="53.34" y="-2.54" length="middle" direction="pas" rot="R180"/>
<pin name="EPAD" x="53.34" y="0" length="middle" direction="pas" rot="R180"/>
<wire x1="7.62" y1="5.08" x2="7.62" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="7.62" y1="-12.7" x2="48.26" y2="-12.7" width="0.1524" layer="94"/>
<wire x1="48.26" y1="-12.7" x2="48.26" y2="5.08" width="0.1524" layer="94"/>
<wire x1="48.26" y1="5.08" x2="7.62" y2="5.08" width="0.1524" layer="94"/>
<text x="23.2156" y="9.1186" size="2.0828" layer="95" ratio="6" rot="SR0">&gt;Name</text>
<text x="22.5806" y="6.5786" size="2.0828" layer="96" ratio="6" rot="SR0">&gt;Value</text>
</symbol>
<symbol name="EFM32ZG108">
<pin name="PA0" x="-12.7" y="22.86" length="middle"/>
<pin name="IOVDD_0" x="-12.7" y="20.32" length="middle" direction="pwr"/>
<pin name="PC0" x="-12.7" y="17.78" length="middle"/>
<pin name="PC1" x="-12.7" y="15.24" length="middle"/>
<pin name="PB7" x="-12.7" y="12.7" length="middle"/>
<pin name="PB8" x="-12.7" y="10.16" length="middle"/>
<pin name="NRESET" x="-12.7" y="7.62" length="middle" direction="in" function="dot"/>
<pin name="PB11" x="-12.7" y="5.08" length="middle"/>
<pin name="AVDD_2" x="-12.7" y="2.54" length="middle" direction="pwr"/>
<pin name="PB13" x="-12.7" y="0" length="middle"/>
<pin name="PB14" x="-12.7" y="-2.54" length="middle"/>
<pin name="AVDD_0" x="-12.7" y="-5.08" length="middle" direction="pwr"/>
<pin name="PD6" x="55.88" y="22.86" length="middle" rot="R180"/>
<pin name="PD7" x="55.88" y="20.32" length="middle" rot="R180"/>
<pin name="VDD_DREG" x="55.88" y="17.78" length="middle" direction="pwr" rot="R180"/>
<pin name="DECOUPLE" x="55.88" y="15.24" length="middle" direction="out" rot="R180"/>
<pin name="PC14" x="55.88" y="12.7" length="middle" rot="R180"/>
<pin name="PC15" x="55.88" y="10.16" length="middle" rot="R180"/>
<pin name="PF0" x="55.88" y="7.62" length="middle" rot="R180"/>
<pin name="PF1" x="55.88" y="5.08" length="middle" rot="R180"/>
<pin name="PF2" x="55.88" y="2.54" length="middle" rot="R180"/>
<pin name="IOVDD_5" x="55.88" y="0" length="middle" direction="pwr" rot="R180"/>
<pin name="PE12" x="55.88" y="-2.54" length="middle" rot="R180"/>
<pin name="PE13" x="55.88" y="-5.08" length="middle" rot="R180"/>
<pin name="VSS" x="20.32" y="-12.7" length="middle" direction="pwr" rot="R90"/>
<wire x1="-7.62" y1="25.4" x2="-7.62" y2="-7.62" width="0.254" layer="94"/>
<wire x1="-7.62" y1="-7.62" x2="50.8" y2="-7.62" width="0.254" layer="94"/>
<wire x1="50.8" y1="-7.62" x2="50.8" y2="25.4" width="0.254" layer="94"/>
<wire x1="50.8" y1="25.4" x2="-7.62" y2="25.4" width="0.254" layer="94"/>
<text x="-7.62" y="27.94" size="1.778" layer="94">&gt;NAME</text>
<text x="-7.62" y="-10.16" size="1.778" layer="94">&gt;VALUE</text>
</symbol>
<symbol name="COPYRIGHT">
<text x="0" y="0" size="1.27" layer="94" font="vector">Copyright 2017 Scott A Dixon</text>
<text x="0" y="-2.54" size="1.27" layer="94" font="vector">Licenced under Creative Commons 2.0 Attribution-ShareAlike</text>
<text x="0" y="-5.08" size="1.27" layer="94" font="vector">32bits.io</text>
</symbol>
<symbol name="BATT" urn="urn:adsk.eagle:symbol:291703/1" locally_modified="yes">
<wire x1="3.81" y1="3.81" x2="3.81" y2="-3.81" width="0.4064" layer="94"/>
<wire x1="5.08" y1="1.27" x2="5.08" y2="-1.27" width="0.4064" layer="94"/>
<wire x1="6.35" y1="3.81" x2="6.35" y2="-3.81" width="0.4064" layer="94"/>
<wire x1="7.62" y1="1.27" x2="7.62" y2="-1.27" width="0.4064" layer="94"/>
<wire x1="2.54" y1="0" x2="3.556" y2="0" width="0.1524" layer="94"/>
<pin name="+$1" x="-2.54" y="2.54" visible="off" length="short" direction="pwr"/>
<pin name="-" x="10.16" y="0" visible="off" length="short" direction="pwr" rot="R180"/>
<text x="5.08" y="4.318" size="1.778" layer="95" font="vector" align="bottom-center">&gt;NAME</text>
<text x="5.08" y="-4.318" size="1.778" layer="96" font="vector" align="top-center">&gt;VALUE</text>
<pin name="+$2" x="-2.54" y="-2.54" visible="off" length="short" direction="pwr"/>
<wire x1="0" y1="-2.54" x2="0" y2="0" width="0.254" layer="94"/>
<wire x1="2.54" y1="0" x2="0" y2="0" width="0.254" layer="94"/>
<wire x1="0" y1="2.54" x2="0" y2="0" width="0.254" layer="94"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="MAX44009EDT+T" urn="urn:adsk.eagle:component:291623/5" prefix="U">
<gates>
<gate name="A" symbol="MAX44009EDT+T" x="0" y="0"/>
</gates>
<devices>
<device name="" package="21-0490D">
<connects>
<connect gate="A" pin="A0" pad="3"/>
<connect gate="A" pin="EPAD" pad="7"/>
<connect gate="A" pin="GND" pad="2"/>
<connect gate="A" pin="INT" pad="4"/>
<connect gate="A" pin="SCL" pad="5"/>
<connect gate="A" pin="SDA" pad="6"/>
<connect gate="A" pin="VCC" pad="1"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:291620/2"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="MANUFACTURER_PART_NUMBER" value="MAX44009EDT+T" constant="no"/>
<attribute name="VENDOR" value="Maxim Integrated Products" constant="no"/>
</technology>
</technologies>
</device>
<device name="21-0490D-M" package="21-0490D-M">
<connects>
<connect gate="A" pin="A0" pad="3"/>
<connect gate="A" pin="EPAD" pad="7"/>
<connect gate="A" pin="GND" pad="2"/>
<connect gate="A" pin="INT" pad="4"/>
<connect gate="A" pin="SCL" pad="5"/>
<connect gate="A" pin="SDA" pad="6"/>
<connect gate="A" pin="VCC" pad="1"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:291621/2"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="MANUFACTURER_PART_NUMBER" value="MAX44009EDT+T" constant="no"/>
<attribute name="VENDOR" value="Maxim Integrated Products" constant="no"/>
</technology>
</technologies>
</device>
<device name="21-0490D-L" package="21-0490D-L">
<connects>
<connect gate="A" pin="A0" pad="3"/>
<connect gate="A" pin="EPAD" pad="7"/>
<connect gate="A" pin="GND" pad="2"/>
<connect gate="A" pin="INT" pad="4"/>
<connect gate="A" pin="SCL" pad="5"/>
<connect gate="A" pin="SDA" pad="6"/>
<connect gate="A" pin="VCC" pad="1"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:291622/2"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="MANUFACTURER_PART_NUMBER" value="MAX44009EDT+T" constant="no"/>
<attribute name="VENDOR" value="Maxim Integrated Products" constant="no"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
<deviceset name="EFM32ZG108" prefix="U">
<description>&lt;h1&gt;EFM32&lt;/h1&gt;
&lt;ul&gt;
&lt;li&gt;ARM Cortex-M0+ CPU platform up to 24 MHz&lt;/li&gt;
&lt;li&gt;32/16/8/4 KB Flash&lt;/li&gt;
&lt;li&gt;4/4/2/2 KB RAM&lt;/li&gt;
&lt;/ul&gt;</description>
<gates>
<gate name="G$1" symbol="EFM32ZG108" x="7.62" y="-25.4"/>
</gates>
<devices>
<device name="" package="QFN-24">
<connects>
<connect gate="G$1" pin="AVDD_0" pad="12"/>
<connect gate="G$1" pin="AVDD_2" pad="9"/>
<connect gate="G$1" pin="DECOUPLE" pad="16"/>
<connect gate="G$1" pin="IOVDD_0" pad="2"/>
<connect gate="G$1" pin="IOVDD_5" pad="22"/>
<connect gate="G$1" pin="NRESET" pad="7"/>
<connect gate="G$1" pin="PA0" pad="1"/>
<connect gate="G$1" pin="PB11" pad="8"/>
<connect gate="G$1" pin="PB13" pad="10"/>
<connect gate="G$1" pin="PB14" pad="11"/>
<connect gate="G$1" pin="PB7" pad="5"/>
<connect gate="G$1" pin="PB8" pad="6"/>
<connect gate="G$1" pin="PC0" pad="3"/>
<connect gate="G$1" pin="PC1" pad="4"/>
<connect gate="G$1" pin="PC14" pad="17"/>
<connect gate="G$1" pin="PC15" pad="18"/>
<connect gate="G$1" pin="PD6" pad="13"/>
<connect gate="G$1" pin="PD7" pad="14"/>
<connect gate="G$1" pin="PE12" pad="23"/>
<connect gate="G$1" pin="PE13" pad="24"/>
<connect gate="G$1" pin="PF0" pad="19"/>
<connect gate="G$1" pin="PF1" pad="20"/>
<connect gate="G$1" pin="PF2" pad="21"/>
<connect gate="G$1" pin="VDD_DREG" pad="15"/>
<connect gate="G$1" pin="VSS" pad="25"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
<deviceset name="DAMNED">
<description>Silkscreen and copyright for the damned board.</description>
<gates>
<gate name="G$1" symbol="COPYRIGHT" x="0" y="0"/>
</gates>
<devices>
<device name="" package="DAMNED_SILK">
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
<deviceset name="LINX_BAT_HLD_001" urn="urn:adsk.eagle:component:291705/2" locally_modified="yes" prefix="G">
<gates>
<gate name="G$1" symbol="BATT" x="50.8" y="-7.62"/>
</gates>
<devices>
<device name="" package="BATT-RETAINER-20MM">
<connects>
<connect gate="G$1" pin="+$1" pad="P$1 P$2"/>
<connect gate="G$1" pin="+$2" pad="P$3 P$4"/>
<connect gate="G$1" pin="-" pad="P$0"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:291704/2"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="SparkFun-LED" urn="urn:adsk.eagle:library:529">
<description>&lt;h3&gt;SparkFun LEDs&lt;/h3&gt;
This library contains discrete LEDs for illumination or indication, but no displays.
&lt;br&gt;
&lt;br&gt;
We've spent an enormous amount of time creating and checking these footprints and parts, but it is &lt;b&gt; the end user's responsibility&lt;/b&gt; to ensure correctness and suitablity for a given componet or application. 
&lt;br&gt;
&lt;br&gt;If you enjoy using this library, please buy one of our products at &lt;a href=" www.sparkfun.com"&gt;SparkFun.com&lt;/a&gt;.
&lt;br&gt;
&lt;br&gt;
&lt;b&gt;Licensing:&lt;/b&gt; Creative Commons ShareAlike 4.0 International - https://creativecommons.org/licenses/by-sa/4.0/ 
&lt;br&gt;
&lt;br&gt;
You are welcome to use this library for commercial purposes. For attribution, we ask that when you begin to sell your device using our footprint, you email us with a link to the product being sold. We want bragging rights that we helped (in a very small part) to create your 8th world wonder. We would like the opportunity to feature your device on our homepage.</description>
<packages>
<package name="LED-0603" urn="urn:adsk.eagle:footprint:39307/1" library_version="1">
<description>&lt;B&gt;LED 0603 SMT&lt;/B&gt;&lt;p&gt;
0603, surface mount.
&lt;p&gt;Specifications:
&lt;ul&gt;&lt;li&gt;Pin count: 2&lt;/li&gt;
&lt;li&gt;Pin pitch:0.075inch &lt;/li&gt;
&lt;li&gt;Area: 0.06" x 0.03"&lt;/li&gt;
&lt;/ul&gt;&lt;/p&gt;
&lt;p&gt;Example device(s):
&lt;ul&gt;&lt;li&gt;LED - BLUE&lt;/li&gt;</description>
<smd name="C" x="0.877" y="0" dx="1" dy="1" layer="1" roundness="30" rot="R270"/>
<smd name="A" x="-0.877" y="0" dx="1" dy="1" layer="1" roundness="30" rot="R270"/>
<text x="0" y="0.635" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-0.635" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<wire x1="1.5875" y1="0.47625" x2="1.5875" y2="-0.47625" width="0.127" layer="21"/>
<wire x1="0.15875" y1="0.47625" x2="0.15875" y2="0" width="0.127" layer="51"/>
<wire x1="0.15875" y1="0" x2="0.15875" y2="-0.47625" width="0.127" layer="51"/>
<wire x1="0.15875" y1="0" x2="-0.15875" y2="0.3175" width="0.127" layer="51"/>
<wire x1="0.15875" y1="0" x2="-0.15875" y2="-0.3175" width="0.127" layer="51"/>
</package>
<package name="LED-1206" urn="urn:adsk.eagle:footprint:39304/1" library_version="1">
<description>&lt;h3&gt;LED 1206 SMT&lt;/h3&gt;

1206, surface mount. 

&lt;p&gt;Specifications:
&lt;ul&gt;&lt;li&gt;Pin count: 2&lt;/li&gt;
&lt;li&gt;Pin pitch: &lt;/li&gt;
&lt;li&gt;Area: 0.125" x 0.06"&lt;/li&gt;
&lt;/ul&gt;&lt;/p&gt;
&lt;p&gt;Example device(s):
&lt;ul&gt;&lt;li&gt;LED&lt;/li&gt;&lt;/ul&gt;</description>
<wire x1="2.4" y1="0.6825" x2="2.4" y2="-0.6825" width="0.2032" layer="21"/>
<wire x1="0.65375" y1="0.6825" x2="0.65375" y2="-0.6825" width="0.2032" layer="51"/>
<wire x1="0.635" y1="0" x2="0.15875" y2="0.47625" width="0.2032" layer="51"/>
<wire x1="0.635" y1="0" x2="0.15875" y2="-0.47625" width="0.2032" layer="51"/>
<smd name="A" x="-1.5" y="0" dx="1.2" dy="1.4" layer="1"/>
<smd name="C" x="1.5" y="0" dx="1.2" dy="1.4" layer="1"/>
<text x="0" y="0.9525" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-0.9525" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
</package>
</packages>
<packages3d>
<package3d name="LED-0603" urn="urn:adsk.eagle:package:39354/1" type="box" library_version="1">
<description>LED 0603 SMT
0603, surface mount.
Specifications:
Pin count: 2
Pin pitch:0.075inch 
Area: 0.06" x 0.03"

Example device(s):
LED - BLUE</description>
</package3d>
<package3d name="LED-1206" urn="urn:adsk.eagle:package:39352/1" type="box" library_version="1">
<description>LED 1206 SMT

1206, surface mount. 

Specifications:
Pin count: 2
Pin pitch: 
Area: 0.125" x 0.06"

Example device(s):
LED</description>
</package3d>
</packages3d>
<symbols>
<symbol name="LED" urn="urn:adsk.eagle:symbol:39303/1" library_version="1">
<description>&lt;h3&gt;LED&lt;/h3&gt;
&lt;p&gt;&lt;/p&gt;</description>
<wire x1="1.27" y1="0" x2="0" y2="-2.54" width="0.254" layer="94"/>
<wire x1="0" y1="-2.54" x2="-1.27" y2="0" width="0.254" layer="94"/>
<wire x1="1.27" y1="-2.54" x2="0" y2="-2.54" width="0.254" layer="94"/>
<wire x1="0" y1="-2.54" x2="-1.27" y2="-2.54" width="0.254" layer="94"/>
<wire x1="1.27" y1="0" x2="-1.27" y2="0" width="0.254" layer="94"/>
<wire x1="-2.032" y1="-0.762" x2="-3.429" y2="-2.159" width="0.1524" layer="94"/>
<wire x1="-1.905" y1="-1.905" x2="-3.302" y2="-3.302" width="0.1524" layer="94"/>
<text x="-3.429" y="-4.572" size="1.778" layer="95" font="vector" rot="R90">&gt;NAME</text>
<text x="1.905" y="-4.572" size="1.778" layer="96" font="vector" rot="R90" align="top-left">&gt;VALUE</text>
<pin name="C" x="0" y="-5.08" visible="off" length="short" direction="pas" rot="R90"/>
<pin name="A" x="0" y="2.54" visible="off" length="short" direction="pas" rot="R270"/>
<polygon width="0.1524" layer="94">
<vertex x="-3.429" y="-2.159"/>
<vertex x="-3.048" y="-1.27"/>
<vertex x="-2.54" y="-1.778"/>
</polygon>
<polygon width="0.1524" layer="94">
<vertex x="-3.302" y="-3.302"/>
<vertex x="-2.921" y="-2.413"/>
<vertex x="-2.413" y="-2.921"/>
</polygon>
</symbol>
</symbols>
<devicesets>
<deviceset name="LED-RED" urn="urn:adsk.eagle:component:39386/1" prefix="D" uservalue="yes" library_version="1">
<description>&lt;h3&gt;Red SMD LED&lt;/h3&gt;
&lt;p&gt;Used in manufacturing of most products at SparkFun&lt;/p&gt;

&lt;p&gt;&lt;b&gt;Packages:&lt;/b&gt;
&lt;ul&gt;&lt;li&gt;&lt;b&gt;0603&lt;/b&gt; - SMD 0603 package &lt;a href="http://docs.avagotech.com/docs/AV02-0551EN"&gt;[Product Link]&lt;/li&gt;
&lt;li&gt;&lt;b&gt;0603 SMART&lt;/b&gt; - SMD 0603 SMART package ( more efficient and expensive)&lt;a href="http://www.osram-os.com/Graphics/XPic2/00077099_0.pdf"&gt;[Product Link]&lt;/li&gt;
&lt;li&gt;&lt;b&gt; 1206&lt;/b&gt; - SMD1206  package &lt;a href="https://www.sparkfun.com/datasheets/DevTools/LilyPad/Q150OVS4.pdff"&gt;[Product Link]&lt;/li&gt;
&lt;ul&gt;&lt;/p&gt;

&lt;p&gt;&lt;b&gt;SparkFun Products:&lt;/b&gt;
&lt;ul&gt;&lt;li&gt;&lt;a href=”https://www.sparkfun.com/products/821”&gt;Pro Mini 328 -5V&lt;/a&gt;&lt;/li&gt;
&lt;li&gt;&lt;a href=”https://www.sparkfun.com/products/12757”&gt;RedBoard&lt;/a&gt;&lt;/li&gt;
&lt;li&gt;&lt;a href=”https://www.sparkfun.com/products/13613”&gt;IOIO-OTG&lt;/a&gt;&lt;/li&gt;
&lt;/ul&gt;&lt;/p&gt;</description>
<gates>
<gate name="G$1" symbol="LED" x="0" y="0"/>
</gates>
<devices>
<device name="0603" package="LED-0603">
<connects>
<connect gate="G$1" pin="A" pad="A"/>
<connect gate="G$1" pin="C" pad="C"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:39354/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="DIO-00819"/>
<attribute name="VALUE" value="RED" constant="no"/>
</technology>
</technologies>
</device>
<device name="1206" package="LED-1206">
<connects>
<connect gate="G$1" pin="A" pad="A"/>
<connect gate="G$1" pin="C" pad="C"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:39352/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="DIO-09912"/>
<attribute name="VALUE" value="RED" constant="no"/>
</technology>
</technologies>
</device>
<device name="0603-SMART" package="LED-0603">
<connects>
<connect gate="G$1" pin="A" pad="A"/>
<connect gate="G$1" pin="C" pad="C"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:39354/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="DIO-11154" constant="no"/>
<attribute name="VALUE" value="Red" constant="no"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="SparkFun-Resistors" urn="urn:adsk.eagle:library:532">
<description>&lt;h3&gt;SparkFun Resistors&lt;/h3&gt;
This library contains resistors. Reference designator:R. 
&lt;br&gt;
&lt;br&gt;
We've spent an enormous amount of time creating and checking these footprints and parts, but it is &lt;b&gt; the end user's responsibility&lt;/b&gt; to ensure correctness and suitablity for a given componet or application. 
&lt;br&gt;
&lt;br&gt;If you enjoy using this library, please buy one of our products at &lt;a href=" www.sparkfun.com"&gt;SparkFun.com&lt;/a&gt;.
&lt;br&gt;
&lt;br&gt;
&lt;b&gt;Licensing:&lt;/b&gt; Creative Commons ShareAlike 4.0 International - https://creativecommons.org/licenses/by-sa/4.0/ 
&lt;br&gt;
&lt;br&gt;
You are welcome to use this library for commercial purposes. For attribution, we ask that when you begin to sell your device using our footprint, you email us with a link to the product being sold. We want bragging rights that we helped (in a very small part) to create your 8th world wonder. We would like the opportunity to feature your device on our homepage.</description>
<packages>
<package name="0603" urn="urn:adsk.eagle:footprint:39615/1" library_version="1">
<description>&lt;p&gt;&lt;b&gt;Generic 1608 (0603) package&lt;/b&gt;&lt;/p&gt;
&lt;p&gt;0.2mm courtyard excess rounded to nearest 0.05mm.&lt;/p&gt;</description>
<wire x1="-1.6" y1="0.7" x2="1.6" y2="0.7" width="0.0508" layer="39"/>
<wire x1="1.6" y1="0.7" x2="1.6" y2="-0.7" width="0.0508" layer="39"/>
<wire x1="1.6" y1="-0.7" x2="-1.6" y2="-0.7" width="0.0508" layer="39"/>
<wire x1="-1.6" y1="-0.7" x2="-1.6" y2="0.7" width="0.0508" layer="39"/>
<wire x1="-0.356" y1="0.432" x2="0.356" y2="0.432" width="0.1016" layer="51"/>
<wire x1="-0.356" y1="-0.419" x2="0.356" y2="-0.419" width="0.1016" layer="51"/>
<smd name="1" x="-0.85" y="0" dx="1.1" dy="1" layer="1"/>
<smd name="2" x="0.85" y="0" dx="1.1" dy="1" layer="1"/>
<text x="0" y="0.762" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-0.762" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<rectangle x1="-0.8382" y1="-0.4699" x2="-0.3381" y2="0.4801" layer="51"/>
<rectangle x1="0.3302" y1="-0.4699" x2="0.8303" y2="0.4801" layer="51"/>
<rectangle x1="-0.1999" y1="-0.3" x2="0.1999" y2="0.3" layer="35"/>
</package>
</packages>
<packages3d>
<package3d name="0603" urn="urn:adsk.eagle:package:39650/1" type="box" library_version="1">
<description>Generic 1608 (0603) package
0.2mm courtyard excess rounded to nearest 0.05mm.</description>
</package3d>
</packages3d>
<symbols>
<symbol name="RESISTOR" urn="urn:adsk.eagle:symbol:39614/1" library_version="1">
<wire x1="-2.54" y1="0" x2="-2.159" y2="1.016" width="0.1524" layer="94"/>
<wire x1="-2.159" y1="1.016" x2="-1.524" y2="-1.016" width="0.1524" layer="94"/>
<wire x1="-1.524" y1="-1.016" x2="-0.889" y2="1.016" width="0.1524" layer="94"/>
<wire x1="-0.889" y1="1.016" x2="-0.254" y2="-1.016" width="0.1524" layer="94"/>
<wire x1="-0.254" y1="-1.016" x2="0.381" y2="1.016" width="0.1524" layer="94"/>
<wire x1="0.381" y1="1.016" x2="1.016" y2="-1.016" width="0.1524" layer="94"/>
<wire x1="1.016" y1="-1.016" x2="1.651" y2="1.016" width="0.1524" layer="94"/>
<wire x1="1.651" y1="1.016" x2="2.286" y2="-1.016" width="0.1524" layer="94"/>
<wire x1="2.286" y1="-1.016" x2="2.54" y2="0" width="0.1524" layer="94"/>
<text x="0" y="1.524" size="1.778" layer="95" font="vector" align="bottom-center">&gt;NAME</text>
<text x="0" y="-1.524" size="1.778" layer="96" font="vector" align="top-center">&gt;VALUE</text>
<pin name="2" x="5.08" y="0" visible="off" length="short" direction="pas" swaplevel="1" rot="R180"/>
<pin name="1" x="-5.08" y="0" visible="off" length="short" direction="pas" swaplevel="1"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="68OHM" urn="urn:adsk.eagle:component:39730/1" prefix="R" library_version="1">
<description>&lt;h3&gt;68Ω resistor&lt;/h3&gt;
&lt;p&gt;A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. Resistors act to reduce current flow, and, at the same time, act to lower voltage levels within circuits. - Wikipedia&lt;/p&gt;</description>
<gates>
<gate name="G$1" symbol="RESISTOR" x="0" y="0"/>
</gates>
<devices>
<device name="-0603-1/10W-1%" package="0603">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:39650/1"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="SparkFun-Capacitors" urn="urn:adsk.eagle:library:510">
<description>&lt;h3&gt;SparkFun Capacitors&lt;/h3&gt;
This library contains capacitors. 
&lt;br&gt;
&lt;br&gt;
We've spent an enormous amount of time creating and checking these footprints and parts, but it is &lt;b&gt; the end user's responsibility&lt;/b&gt; to ensure correctness and suitablity for a given componet or application. 
&lt;br&gt;
&lt;br&gt;If you enjoy using this library, please buy one of our products at &lt;a href=" www.sparkfun.com"&gt;SparkFun.com&lt;/a&gt;.
&lt;br&gt;
&lt;br&gt;
&lt;b&gt;Licensing:&lt;/b&gt; Creative Commons ShareAlike 4.0 International - https://creativecommons.org/licenses/by-sa/4.0/ 
&lt;br&gt;
&lt;br&gt;
You are welcome to use this library for commercial purposes. For attribution, we ask that when you begin to sell your device using our footprint, you email us with a link to the product being sold. We want bragging rights that we helped (in a very small part) to create your 8th world wonder. We would like the opportunity to feature your device on our homepage.</description>
<packages>
<package name="0603" urn="urn:adsk.eagle:footprint:37386/1" library_version="1">
<description>&lt;p&gt;&lt;b&gt;Generic 1608 (0603) package&lt;/b&gt;&lt;/p&gt;
&lt;p&gt;0.2mm courtyard excess rounded to nearest 0.05mm.&lt;/p&gt;</description>
<wire x1="-1.6" y1="0.7" x2="1.6" y2="0.7" width="0.0508" layer="39"/>
<wire x1="1.6" y1="0.7" x2="1.6" y2="-0.7" width="0.0508" layer="39"/>
<wire x1="1.6" y1="-0.7" x2="-1.6" y2="-0.7" width="0.0508" layer="39"/>
<wire x1="-1.6" y1="-0.7" x2="-1.6" y2="0.7" width="0.0508" layer="39"/>
<wire x1="-0.356" y1="0.432" x2="0.356" y2="0.432" width="0.1016" layer="51"/>
<wire x1="-0.356" y1="-0.419" x2="0.356" y2="-0.419" width="0.1016" layer="51"/>
<smd name="1" x="-0.85" y="0" dx="1.1" dy="1" layer="1"/>
<smd name="2" x="0.85" y="0" dx="1.1" dy="1" layer="1"/>
<text x="0" y="0.762" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-0.762" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<rectangle x1="-0.8382" y1="-0.4699" x2="-0.3381" y2="0.4801" layer="51"/>
<rectangle x1="0.3302" y1="-0.4699" x2="0.8303" y2="0.4801" layer="51"/>
<rectangle x1="-0.1999" y1="-0.3" x2="0.1999" y2="0.3" layer="35"/>
</package>
<package name="0402" urn="urn:adsk.eagle:footprint:37389/1" library_version="1">
<description>&lt;p&gt;&lt;b&gt;Generic 1005 (0402) package&lt;/b&gt;&lt;/p&gt;
&lt;p&gt;0.2mm courtyard excess rounded to nearest 0.05mm.&lt;/p&gt;</description>
<wire x1="-0.2704" y1="0.2286" x2="0.2704" y2="0.2286" width="0.1524" layer="51"/>
<wire x1="0.2704" y1="-0.2286" x2="-0.2704" y2="-0.2286" width="0.1524" layer="51"/>
<wire x1="-1.2" y1="0.65" x2="1.2" y2="0.65" width="0.0508" layer="39"/>
<wire x1="1.2" y1="0.65" x2="1.2" y2="-0.65" width="0.0508" layer="39"/>
<wire x1="1.2" y1="-0.65" x2="-1.2" y2="-0.65" width="0.0508" layer="39"/>
<wire x1="-1.2" y1="-0.65" x2="-1.2" y2="0.65" width="0.0508" layer="39"/>
<smd name="1" x="-0.58" y="0" dx="0.85" dy="0.9" layer="1"/>
<smd name="2" x="0.58" y="0" dx="0.85" dy="0.9" layer="1"/>
<text x="0" y="0.762" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-0.762" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<rectangle x1="-0.554" y1="-0.3048" x2="-0.254" y2="0.3048" layer="51"/>
<rectangle x1="0.2588" y1="-0.3048" x2="0.5588" y2="0.3048" layer="51"/>
<rectangle x1="-0.1999" y1="-0.3" x2="0.1999" y2="0.3" layer="35"/>
</package>
<package name="0805" urn="urn:adsk.eagle:footprint:37400/1" library_version="1">
<description>&lt;p&gt;&lt;b&gt;Generic 2012 (0805) package&lt;/b&gt;&lt;/p&gt;
&lt;p&gt;0.2mm courtyard excess rounded to nearest 0.05mm.&lt;/p&gt;</description>
<smd name="1" x="-0.9" y="0" dx="0.8" dy="1.2" layer="1"/>
<smd name="2" x="0.9" y="0" dx="0.8" dy="1.2" layer="1"/>
<text x="0" y="0.889" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-0.889" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<wire x1="-1.5" y1="0.8" x2="1.5" y2="0.8" width="0.0508" layer="39"/>
<wire x1="1.5" y1="0.8" x2="1.5" y2="-0.8" width="0.0508" layer="39"/>
<wire x1="1.5" y1="-0.8" x2="-1.5" y2="-0.8" width="0.0508" layer="39"/>
<wire x1="-1.5" y1="-0.8" x2="-1.5" y2="0.8" width="0.0508" layer="39"/>
</package>
<package name="1206" urn="urn:adsk.eagle:footprint:37399/1" library_version="1">
<description>&lt;p&gt;&lt;b&gt;Generic 3216 (1206) package&lt;/b&gt;&lt;/p&gt;
&lt;p&gt;0.2mm courtyard excess rounded to nearest 0.05mm.&lt;/p&gt;</description>
<wire x1="-2.4" y1="1.1" x2="2.4" y2="1.1" width="0.0508" layer="39"/>
<wire x1="2.4" y1="-1.1" x2="-2.4" y2="-1.1" width="0.0508" layer="39"/>
<wire x1="-2.4" y1="-1.1" x2="-2.4" y2="1.1" width="0.0508" layer="39"/>
<wire x1="2.4" y1="1.1" x2="2.4" y2="-1.1" width="0.0508" layer="39"/>
<wire x1="-0.965" y1="0.787" x2="0.965" y2="0.787" width="0.1016" layer="51"/>
<wire x1="-0.965" y1="-0.787" x2="0.965" y2="-0.787" width="0.1016" layer="51"/>
<smd name="1" x="-1.4" y="0" dx="1.6" dy="1.8" layer="1"/>
<smd name="2" x="1.4" y="0" dx="1.6" dy="1.8" layer="1"/>
<text x="0" y="1.143" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-1.143" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<rectangle x1="-1.7018" y1="-0.8509" x2="-0.9517" y2="0.8491" layer="51"/>
<rectangle x1="0.9517" y1="-0.8491" x2="1.7018" y2="0.8509" layer="51"/>
<rectangle x1="-0.1999" y1="-0.4001" x2="0.1999" y2="0.4001" layer="35"/>
</package>
<package name="1210" urn="urn:adsk.eagle:footprint:37401/1" library_version="1">
<description>&lt;p&gt;&lt;b&gt;Generic 3225 (1210) package&lt;/b&gt;&lt;/p&gt;
&lt;p&gt;0.2mm courtyard excess rounded to nearest 0.05mm.&lt;/p&gt;</description>
<wire x1="-1.5365" y1="1.1865" x2="1.5365" y2="1.1865" width="0.127" layer="51"/>
<wire x1="1.5365" y1="1.1865" x2="1.5365" y2="-1.1865" width="0.127" layer="51"/>
<wire x1="1.5365" y1="-1.1865" x2="-1.5365" y2="-1.1865" width="0.127" layer="51"/>
<wire x1="-1.5365" y1="-1.1865" x2="-1.5365" y2="1.1865" width="0.127" layer="51"/>
<wire x1="-2.59" y1="1.45" x2="2.59" y2="1.45" width="0.0508" layer="39"/>
<wire x1="2.59" y1="1.45" x2="2.59" y2="-1.45" width="0.0508" layer="39"/>
<wire x1="2.59" y1="-1.45" x2="-2.59" y2="-1.45" width="0.0508" layer="39"/>
<wire x1="-2.59" y1="-1.45" x2="-2.59" y2="1.45" width="0.0508" layer="39"/>
<smd name="1" x="-1.755" y="0" dx="1.27" dy="2.06" layer="1"/>
<smd name="2" x="1.755" y="0" dx="1.27" dy="2.06" layer="1"/>
<text x="0" y="1.397" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-1.397" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
</package>
</packages>
<packages3d>
<package3d name="0603" urn="urn:adsk.eagle:package:37414/1" type="box" library_version="1">
<description>Generic 1608 (0603) package
0.2mm courtyard excess rounded to nearest 0.05mm.</description>
</package3d>
<package3d name="0402" urn="urn:adsk.eagle:package:37413/1" type="box" library_version="1">
<description>Generic 1005 (0402) package
0.2mm courtyard excess rounded to nearest 0.05mm.</description>
</package3d>
<package3d name="0805" urn="urn:adsk.eagle:package:37429/1" type="box" library_version="1">
<description>Generic 2012 (0805) package
0.2mm courtyard excess rounded to nearest 0.05mm.</description>
</package3d>
<package3d name="1206" urn="urn:adsk.eagle:package:37426/1" type="box" library_version="1">
<description>Generic 3216 (1206) package
0.2mm courtyard excess rounded to nearest 0.05mm.</description>
</package3d>
<package3d name="1210" urn="urn:adsk.eagle:package:37436/1" type="box" library_version="1">
<description>Generic 3225 (1210) package
0.2mm courtyard excess rounded to nearest 0.05mm.</description>
</package3d>
</packages3d>
<symbols>
<symbol name="CAP" urn="urn:adsk.eagle:symbol:37385/1" library_version="1">
<wire x1="0" y1="2.54" x2="0" y2="2.032" width="0.1524" layer="94"/>
<wire x1="0" y1="0" x2="0" y2="0.508" width="0.1524" layer="94"/>
<text x="1.524" y="2.921" size="1.778" layer="95" font="vector">&gt;NAME</text>
<text x="1.524" y="-2.159" size="1.778" layer="96" font="vector">&gt;VALUE</text>
<rectangle x1="-2.032" y1="0.508" x2="2.032" y2="1.016" layer="94"/>
<rectangle x1="-2.032" y1="1.524" x2="2.032" y2="2.032" layer="94"/>
<pin name="1" x="0" y="5.08" visible="off" length="short" direction="pas" swaplevel="1" rot="R270"/>
<pin name="2" x="0" y="-2.54" visible="off" length="short" direction="pas" swaplevel="1" rot="R90"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="1.0UF" urn="urn:adsk.eagle:component:37474/1" prefix="C" library_version="1">
<description>&lt;h3&gt;1µF ceramic capacitors&lt;/h3&gt;
&lt;p&gt;A capacitor is a passive two-terminal electrical component used to store electrical energy temporarily in an electric field.&lt;/p&gt;</description>
<gates>
<gate name="G$1" symbol="CAP" x="0" y="0"/>
</gates>
<devices>
<device name="-0603-16V-10%" package="0603">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37414/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-00868"/>
<attribute name="VALUE" value="1.0uF"/>
</technology>
</technologies>
</device>
<device name="-0402-16V-10%" package="0402">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37413/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-12417"/>
<attribute name="VALUE" value="1.0uF"/>
</technology>
</technologies>
</device>
<device name="-0805-25V-(+80/-20%)" package="0805">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37429/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-11625"/>
<attribute name="VALUE" value="1.0uF"/>
</technology>
</technologies>
</device>
<device name="-1206-50V-10%" package="1206">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37426/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-09822"/>
<attribute name="VALUE" value="1.0uF"/>
</technology>
</technologies>
</device>
<device name="-0805-25V-10%" package="0805">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37429/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-08064"/>
<attribute name="VALUE" value="1.0uF"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
<deviceset name="10UF" urn="urn:adsk.eagle:component:37478/1" prefix="C" library_version="1">
<description>&lt;h3&gt;10.0µF ceramic capacitors&lt;/h3&gt;
&lt;p&gt;A capacitor is a passive two-terminal electrical component used to store electrical energy temporarily in an electric field.&lt;/p&gt;</description>
<gates>
<gate name="G$1" symbol="CAP" x="0" y="0"/>
</gates>
<devices>
<device name="-0603-6.3V-20%" package="0603">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37414/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-11015"/>
<attribute name="VALUE" value="10uF"/>
</technology>
</technologies>
</device>
<device name="-1206-6.3V-20%" package="1206">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37426/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-10057"/>
<attribute name="VALUE" value="10uF"/>
</technology>
</technologies>
</device>
<device name="-0805-10V-10%" package="0805">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37429/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-11330"/>
<attribute name="VALUE" value="10uF"/>
</technology>
</technologies>
</device>
<device name="-1210-50V-20%" package="1210">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:37436/1"/>
</package3dinstances>
<technologies>
<technology name="">
<attribute name="PROD_ID" value="CAP-09824"/>
<attribute name="VALUE" value="10uF"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="SparkFun-Jumpers" urn="urn:adsk.eagle:library:528">
<description>&lt;h3&gt;SparkFun Jumpers&lt;/h3&gt;
In this library you'll find jumpers, or other semipermanent means of changing current paths. The least permanent form is the solder jumper. These can be changed by adding, removing, or moving solder. In cases that are less likely to be changed we have jumpers that are connected with traces. These can be cut with a razor, or reconnected with solder. Reference designator JP.
&lt;br&gt;
&lt;br&gt;
We've spent an enormous amount of time creating and checking these footprints and parts, but it is &lt;b&gt; the end user's responsibility&lt;/b&gt; to ensure correctness and suitablity for a given componet or application. 
&lt;br&gt;
&lt;br&gt;If you enjoy using this library, please buy one of our products at &lt;a href=" www.sparkfun.com"&gt;SparkFun.com&lt;/a&gt;.
&lt;br&gt;
&lt;br&gt;
&lt;b&gt;Licensing:&lt;/b&gt; Creative Commons ShareAlike 4.0 International - https://creativecommons.org/licenses/by-sa/4.0/ 
&lt;br&gt;
&lt;br&gt;
You are welcome to use this library for commercial purposes. For attribution, we ask that when you begin to sell your device using our footprint, you email us with a link to the product being sold. We want bragging rights that we helped (in a very small part) to create your 8th world wonder. We would like the opportunity to feature your device on our homepage.</description>
<packages>
<package name="SMT-JUMPER_2_NC_TRACE_NO-SILK" urn="urn:adsk.eagle:footprint:39257/1" library_version="1">
<smd name="1" x="-0.508" y="0" dx="0.635" dy="1.27" layer="1" cream="no"/>
<smd name="2" x="0.508" y="0" dx="0.635" dy="1.27" layer="1" cream="no"/>
<text x="0" y="1.143" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-1.143" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<wire x1="-0.508" y1="0" x2="0.508" y2="0" width="0.254" layer="1"/>
<polygon width="0.127" layer="29">
<vertex x="-0.1905" y="0.127"/>
<vertex x="0.1905" y="0.127"/>
<vertex x="0.1905" y="-0.127"/>
<vertex x="-0.1905" y="-0.127"/>
</polygon>
</package>
<package name="SMT-JUMPER_2_NC_TRACE_SILK" urn="urn:adsk.eagle:footprint:39258/1" library_version="1">
<wire x1="0.762" y1="-1.016" x2="-0.762" y2="-1.016" width="0.1524" layer="21"/>
<wire x1="0.762" y1="1.016" x2="1.2192" y2="0.5588" width="0.1524" layer="21" curve="-90"/>
<wire x1="-1.2192" y1="0.5588" x2="-0.762" y2="1.016" width="0.1524" layer="21" curve="-90"/>
<wire x1="-1.2192" y1="-0.5588" x2="-0.762" y2="-1.016" width="0.1524" layer="21" curve="90"/>
<wire x1="0.762" y1="-1.016" x2="1.2192" y2="-0.5588" width="0.1524" layer="21" curve="90"/>
<wire x1="1.2192" y1="-0.5588" x2="1.2192" y2="0.5588" width="0.1524" layer="21"/>
<wire x1="-1.2192" y1="-0.5588" x2="-1.2192" y2="0.5588" width="0.1524" layer="21"/>
<wire x1="-0.762" y1="1.016" x2="0.762" y2="1.016" width="0.1524" layer="21"/>
<wire x1="-0.508" y1="0" x2="0.508" y2="0" width="0.254" layer="1"/>
<smd name="1" x="-0.508" y="0" dx="0.635" dy="1.27" layer="1" cream="no"/>
<smd name="2" x="0.508" y="0" dx="0.635" dy="1.27" layer="1" cream="no"/>
<text x="0" y="1.143" size="0.6096" layer="25" font="vector" ratio="20" align="bottom-center">&gt;NAME</text>
<text x="0" y="-1.143" size="0.6096" layer="27" font="vector" ratio="20" align="top-center">&gt;VALUE</text>
<polygon width="0.127" layer="29">
<vertex x="-0.1905" y="0.127"/>
<vertex x="0.1905" y="0.127"/>
<vertex x="0.1905" y="-0.127"/>
<vertex x="-0.1905" y="-0.127"/>
</polygon>
</package>
</packages>
<packages3d>
<package3d name="SMT-JUMPER_2_NC_TRACE_NO-SILK" urn="urn:adsk.eagle:package:39286/1" type="box" library_version="1">
</package3d>
<package3d name="SMT-JUMPER_2_NC_TRACE_SILK" urn="urn:adsk.eagle:package:39281/1" type="box" library_version="1">
</package3d>
</packages3d>
<symbols>
<symbol name="SMT-JUMPER_2_NC_TRACE" urn="urn:adsk.eagle:symbol:39256/1" library_version="1">
<wire x1="0.381" y1="0.635" x2="1.016" y2="0" width="1.27" layer="94" curve="-90" cap="flat"/>
<wire x1="1.016" y1="0" x2="0.381" y2="-0.635" width="1.27" layer="94" curve="-90" cap="flat"/>
<wire x1="-0.381" y1="-0.635" x2="-0.381" y2="0.635" width="1.27" layer="94" curve="-180" cap="flat"/>
<wire x1="2.54" y1="0" x2="1.651" y2="0" width="0.1524" layer="94"/>
<wire x1="-2.54" y1="0" x2="-1.651" y2="0" width="0.1524" layer="94"/>
<wire x1="-0.762" y1="0" x2="1.016" y2="0" width="0.254" layer="94"/>
<text x="-2.54" y="2.54" size="1.778" layer="95" font="vector">&gt;NAME</text>
<text x="-2.54" y="-2.54" size="1.778" layer="96" font="vector" align="top-left">&gt;VALUE</text>
<pin name="2" x="5.08" y="0" visible="off" length="short" direction="pas" swaplevel="1" rot="R180"/>
<pin name="1" x="-5.08" y="0" visible="off" length="short" direction="pas" swaplevel="1"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="JUMPER-SMT_2_NC_TRACE" urn="urn:adsk.eagle:component:39295/1" prefix="JP" library_version="1">
<description>&lt;h3&gt;Normally closed trace jumper&lt;/h3&gt;
&lt;p&gt;This jumper has a trace between two pads so it's normally closed (NC). Use a razor knife to open the connection. For best results follow the IPC guidelines for cutting traces:&lt;/p&gt;
&lt;ul&gt;
&lt;li&gt;Cutout at least 0.063 mm (0.005 in).&lt;/li&gt;
&lt;li&gt;Remove all loose material to clean up the cut area.&lt;/li&gt;
&lt;li&gt;Seal the cut with an approved epoxy.&lt;/li&gt;
&lt;/ul&gt;
&lt;p&gt;Reapply solder to reclose the connection.&lt;/p&gt;</description>
<gates>
<gate name="G$1" symbol="SMT-JUMPER_2_NC_TRACE" x="0" y="0"/>
</gates>
<devices>
<device name="_NO-SILK" package="SMT-JUMPER_2_NC_TRACE_NO-SILK">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:39286/1"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
<device name="_SILK" package="SMT-JUMPER_2_NC_TRACE_SILK">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:39281/1"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="TC1" library="TagConnect" deviceset="TC2050-IDC" device=""/>
<part name="U2" library="boneyard" deviceset="MAX44009EDT+T" device="21-0490D-M" package3d_urn="urn:adsk.eagle:package:291621/2"/>
<part name="U1" library="boneyard" deviceset="EFM32ZG108" device=""/>
<part name="D1" library="SparkFun-LED" library_urn="urn:adsk.eagle:library:529" deviceset="LED-RED" device="1206" package3d_urn="urn:adsk.eagle:package:39352/1" value="RED"/>
<part name="D2" library="SparkFun-LED" library_urn="urn:adsk.eagle:library:529" deviceset="LED-RED" device="1206" package3d_urn="urn:adsk.eagle:package:39352/1" value="RED"/>
<part name="R1" library="SparkFun-Resistors" library_urn="urn:adsk.eagle:library:532" deviceset="68OHM" device="-0603-1/10W-1%" package3d_urn="urn:adsk.eagle:package:39650/1"/>
<part name="R2" library="SparkFun-Resistors" library_urn="urn:adsk.eagle:library:532" deviceset="68OHM" device="-0603-1/10W-1%" package3d_urn="urn:adsk.eagle:package:39650/1"/>
<part name="U$1" library="boneyard" deviceset="DAMNED" device=""/>
<part name="C1" library="SparkFun-Capacitors" library_urn="urn:adsk.eagle:library:510" deviceset="1.0UF" device="-0603-16V-10%" package3d_urn="urn:adsk.eagle:package:37414/1" value="1.0uF"/>
<part name="JP1" library="SparkFun-Jumpers" library_urn="urn:adsk.eagle:library:528" deviceset="JUMPER-SMT_2_NC_TRACE" device="_NO-SILK" package3d_urn="urn:adsk.eagle:package:39286/1"/>
<part name="C2" library="SparkFun-Capacitors" library_urn="urn:adsk.eagle:library:510" deviceset="10UF" device="-0805-10V-10%" package3d_urn="urn:adsk.eagle:package:37429/1" value="10uF"/>
<part name="C6" library="SparkFun-Capacitors" library_urn="urn:adsk.eagle:library:510" deviceset="10UF" device="-0805-10V-10%" package3d_urn="urn:adsk.eagle:package:37429/1" value="10uF"/>
<part name="G1" library="boneyard" deviceset="LINX_BAT_HLD_001" device="" package3d_urn="urn:adsk.eagle:package:291704/2"/>
<part name="JP2" library="SparkFun-Jumpers" library_urn="urn:adsk.eagle:library:528" deviceset="JUMPER-SMT_2_NC_TRACE" device="_NO-SILK" package3d_urn="urn:adsk.eagle:package:39286/1"/>
<part name="JP3" library="SparkFun-Jumpers" library_urn="urn:adsk.eagle:library:528" deviceset="JUMPER-SMT_2_NC_TRACE" device="_NO-SILK" package3d_urn="urn:adsk.eagle:package:39286/1"/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="TC1" gate="A" x="-27.94" y="50.8" rot="R180"/>
<instance part="U2" gate="A" x="86.36" y="22.86"/>
<instance part="U1" gate="G$1" x="55.88" y="55.88"/>
<instance part="D1" gate="G$1" x="-27.94" y="104.14"/>
<instance part="D2" gate="G$1" x="-17.78" y="104.14"/>
<instance part="R1" gate="G$1" x="-27.94" y="116.84" smashed="yes" rot="R90">
<attribute name="NAME" x="-29.464" y="116.84" size="1.778" layer="95" font="vector" rot="R90" align="bottom-center"/>
</instance>
<instance part="R2" gate="G$1" x="-17.78" y="116.84" smashed="yes" rot="R90">
<attribute name="NAME" x="-19.304" y="116.84" size="1.778" layer="95" font="vector" rot="R90" align="bottom-center"/>
</instance>
<instance part="U$1" gate="G$1" x="48.26" y="104.14"/>
<instance part="C1" gate="G$1" x="142.24" y="63.5"/>
<instance part="JP1" gate="G$1" x="33.02" y="58.42" smashed="yes">
<attribute name="NAME" x="30.48" y="60.96" size="1.778" layer="95" font="vector"/>
</instance>
<instance part="C2" gate="G$1" x="129.54" y="83.82"/>
<instance part="C6" gate="G$1" x="5.08" y="71.12"/>
<instance part="G1" gate="G$1" x="50.8" y="12.7"/>
<instance part="JP2" gate="G$1" x="35.56" y="15.24" smashed="yes">
<attribute name="NAME" x="33.02" y="17.78" size="1.778" layer="95" font="vector"/>
</instance>
<instance part="JP3" gate="G$1" x="35.56" y="10.16" smashed="yes">
<attribute name="NAME" x="33.02" y="5.08" size="1.778" layer="95" font="vector"/>
</instance>
</instances>
<busses>
</busses>
<nets>
<net name="VSS" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="VSS"/>
<wire x1="76.2" y1="20.32" x2="76.2" y2="43.18" width="0.1524" layer="91"/>
<pinref part="U2" gate="A" pin="GND"/>
<wire x1="88.9" y1="20.32" x2="76.2" y2="20.32" width="0.1524" layer="91"/>
<pinref part="U2" gate="A" pin="A0"/>
<wire x1="88.9" y1="17.78" x2="76.2" y2="17.78" width="0.1524" layer="91"/>
<wire x1="76.2" y1="17.78" x2="76.2" y2="20.32" width="0.1524" layer="91"/>
<junction x="76.2" y="20.32"/>
<label x="70.358" y="28.702" size="1.778" layer="95"/>
<pinref part="G1" gate="G$1" pin="-"/>
<wire x1="60.96" y1="12.7" x2="76.2" y2="12.7" width="0.1524" layer="91"/>
<wire x1="76.2" y1="12.7" x2="76.2" y2="17.78" width="0.1524" layer="91"/>
<junction x="76.2" y="17.78"/>
</segment>
<segment>
<pinref part="U2" gate="A" pin="EPAD"/>
<wire x1="139.7" y1="22.86" x2="149.86" y2="22.86" width="0.1524" layer="91"/>
<label x="145.288" y="23.368" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="TC1" gate="A" pin="3"/>
<wire x1="-35.56" y1="53.34" x2="-43.18" y2="53.34" width="0.1524" layer="91"/>
<pinref part="TC1" gate="A" pin="5"/>
<wire x1="-35.56" y1="50.8" x2="-43.18" y2="50.8" width="0.1524" layer="91"/>
<wire x1="-43.18" y1="50.8" x2="-43.18" y2="53.34" width="0.1524" layer="91"/>
<pinref part="TC1" gate="A" pin="9"/>
<wire x1="-35.56" y1="45.72" x2="-43.18" y2="45.72" width="0.1524" layer="91"/>
<wire x1="-43.18" y1="45.72" x2="-43.18" y2="50.8" width="0.1524" layer="91"/>
<junction x="-43.18" y="50.8"/>
<wire x1="-43.18" y1="45.72" x2="-43.18" y2="33.02" width="0.1524" layer="91"/>
<junction x="-43.18" y="45.72"/>
<label x="-42.418" y="33.274" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="C1" gate="G$1" pin="2"/>
<wire x1="142.24" y1="60.96" x2="142.24" y2="53.34" width="0.1524" layer="91"/>
<label x="143.256" y="53.848" size="1.778" layer="95"/>
</segment>
<segment>
<label x="-1.016" y="63.754" size="1.778" layer="95"/>
<pinref part="C6" gate="G$1" pin="2"/>
<wire x1="5.08" y1="68.58" x2="5.08" y2="63.5" width="0.1524" layer="91"/>
</segment>
<segment>
<pinref part="C2" gate="G$1" pin="1"/>
<wire x1="129.54" y1="88.9" x2="129.54" y2="93.98" width="0.1524" layer="91"/>
<label x="124.46" y="91.44" size="1.778" layer="95"/>
</segment>
</net>
<net name="VCC" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="IOVDD_0"/>
<label x="30.988" y="76.454" size="1.778" layer="95"/>
<wire x1="43.18" y1="76.2" x2="5.08" y2="76.2" width="0.1524" layer="91"/>
<pinref part="C6" gate="G$1" pin="1"/>
<wire x1="5.08" y1="76.2" x2="5.08" y2="81.28" width="0.1524" layer="91"/>
<junction x="5.08" y="76.2"/>
</segment>
<segment>
<pinref part="U2" gate="A" pin="VCC"/>
<wire x1="88.9" y1="22.86" x2="78.74" y2="22.86" width="0.1524" layer="91"/>
<label x="78.994" y="23.368" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="TC1" gate="A" pin="1"/>
<wire x1="-35.56" y1="55.88" x2="-43.18" y2="55.88" width="0.1524" layer="91"/>
<label x="-42.926" y="56.388" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U1" gate="G$1" pin="IOVDD_5"/>
<label x="119.634" y="56.388" size="1.778" layer="95"/>
<wire x1="111.76" y1="55.88" x2="124.46" y2="55.88" width="0.1524" layer="91"/>
</segment>
<segment>
<pinref part="R1" gate="G$1" pin="2"/>
<wire x1="-27.94" y1="121.92" x2="-27.94" y2="129.54" width="0.1524" layer="91"/>
<label x="-28.448" y="125.73" size="1.778" layer="95" rot="R90"/>
</segment>
<segment>
<pinref part="R2" gate="G$1" pin="2"/>
<wire x1="-17.78" y1="121.92" x2="-17.78" y2="129.54" width="0.1524" layer="91"/>
<label x="-18.288" y="125.73" size="1.778" layer="95" rot="R90"/>
</segment>
<segment>
<pinref part="JP1" gate="G$1" pin="1"/>
<wire x1="27.94" y1="58.42" x2="15.24" y2="58.42" width="0.1524" layer="91"/>
<label x="15.748" y="59.182" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U1" gate="G$1" pin="VDD_DREG"/>
<wire x1="111.76" y1="73.66" x2="129.54" y2="73.66" width="0.1524" layer="91"/>
<wire x1="129.54" y1="73.66" x2="142.24" y2="73.66" width="0.1524" layer="91"/>
<pinref part="C2" gate="G$1" pin="2"/>
<wire x1="129.54" y1="81.28" x2="129.54" y2="73.66" width="0.1524" layer="91"/>
<junction x="129.54" y="73.66"/>
<label x="119.888" y="74.168" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="JP2" gate="G$1" pin="1"/>
<wire x1="30.48" y1="15.24" x2="22.86" y2="15.24" width="0.1524" layer="91"/>
<wire x1="22.86" y1="15.24" x2="22.86" y2="12.7" width="0.1524" layer="91"/>
<wire x1="22.86" y1="12.7" x2="15.24" y2="12.7" width="0.1524" layer="91"/>
<pinref part="JP3" gate="G$1" pin="1"/>
<wire x1="30.48" y1="10.16" x2="22.86" y2="10.16" width="0.1524" layer="91"/>
<wire x1="22.86" y1="10.16" x2="22.86" y2="12.7" width="0.1524" layer="91"/>
<junction x="22.86" y="12.7"/>
<label x="15.748" y="13.462" size="1.778" layer="95"/>
</segment>
</net>
<net name="PA0" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PA0"/>
<wire x1="43.18" y1="78.74" x2="30.48" y2="78.74" width="0.1524" layer="91"/>
<label x="35.052" y="81.026" size="1.778" layer="95" rot="R180"/>
</segment>
<segment>
<pinref part="U2" gate="A" pin="INT"/>
<wire x1="139.7" y1="15.24" x2="149.86" y2="15.24" width="0.1524" layer="91"/>
<label x="145.542" y="15.494" size="1.778" layer="95"/>
</segment>
</net>
<net name="SDA" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PE12"/>
<wire x1="111.76" y1="53.34" x2="124.46" y2="53.34" width="0.1524" layer="91"/>
<label x="119.634" y="53.594" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U2" gate="A" pin="SDA"/>
<wire x1="139.7" y1="20.32" x2="149.86" y2="20.32" width="0.1524" layer="91"/>
<label x="145.542" y="20.828" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="TC1" gate="A" pin="7"/>
<wire x1="-35.56" y1="48.26" x2="-40.64" y2="48.26" width="0.1524" layer="91"/>
<label x="-40.894" y="48.514" size="1.778" layer="95"/>
</segment>
</net>
<net name="SCL" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PE13"/>
<wire x1="111.76" y1="50.8" x2="124.46" y2="50.8" width="0.1524" layer="91"/>
<label x="119.634" y="51.054" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U2" gate="A" pin="SCL"/>
<wire x1="139.7" y1="17.78" x2="149.86" y2="17.78" width="0.1524" layer="91"/>
<label x="145.796" y="18.034" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="TC1" gate="A" pin="8"/>
<wire x1="-20.32" y1="48.26" x2="-7.62" y2="48.26" width="0.1524" layer="91"/>
<label x="-15.494" y="48.768" size="1.778" layer="95"/>
</segment>
</net>
<net name="PC0" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PC0"/>
<wire x1="43.18" y1="73.66" x2="30.48" y2="73.66" width="0.1524" layer="91"/>
<label x="30.988" y="73.914" size="1.778" layer="95"/>
</segment>
<segment>
<label x="-28.448" y="86.36" size="1.778" layer="95" rot="R90"/>
<pinref part="D1" gate="G$1" pin="C"/>
<wire x1="-27.94" y1="99.06" x2="-27.94" y2="86.36" width="0.1524" layer="91"/>
</segment>
</net>
<net name="PC1" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PC1"/>
<wire x1="43.18" y1="71.12" x2="30.48" y2="71.12" width="0.1524" layer="91"/>
<label x="30.988" y="71.374" size="1.778" layer="95"/>
</segment>
<segment>
<label x="-18.288" y="86.36" size="1.778" layer="95" rot="R90"/>
<pinref part="D2" gate="G$1" pin="C"/>
<wire x1="-17.78" y1="99.06" x2="-17.78" y2="86.36" width="0.1524" layer="91"/>
</segment>
</net>
<net name="NRESET" class="0">
<segment>
<pinref part="TC1" gate="A" pin="10"/>
<wire x1="-20.32" y1="45.72" x2="-7.62" y2="45.72" width="0.1524" layer="91"/>
<label x="-15.494" y="46.228" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U1" gate="G$1" pin="NRESET"/>
<wire x1="43.18" y1="63.5" x2="30.48" y2="63.5" width="0.1524" layer="91"/>
<label x="30.734" y="64.008" size="1.778" layer="95"/>
</segment>
</net>
<net name="SWCLRIP" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PF0"/>
<wire x1="111.76" y1="63.5" x2="124.46" y2="63.5" width="0.1524" layer="91"/>
<label x="116.84" y="63.754" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="TC1" gate="A" pin="4"/>
<wire x1="-20.32" y1="53.34" x2="-7.62" y2="53.34" width="0.1524" layer="91"/>
<label x="-15.24" y="53.594" size="1.778" layer="95"/>
</segment>
</net>
<net name="SWDIO" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PF1"/>
<wire x1="111.76" y1="60.96" x2="124.46" y2="60.96" width="0.1524" layer="91"/>
<label x="116.84" y="61.214" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="TC1" gate="A" pin="2"/>
<wire x1="-20.32" y1="55.88" x2="-7.62" y2="55.88" width="0.1524" layer="91"/>
<label x="-15.24" y="56.134" size="1.778" layer="95"/>
</segment>
</net>
<net name="N$2" class="0">
<segment>
<pinref part="R2" gate="G$1" pin="1"/>
<pinref part="D2" gate="G$1" pin="A"/>
<wire x1="-17.78" y1="111.76" x2="-17.78" y2="106.68" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$3" class="0">
<segment>
<pinref part="R1" gate="G$1" pin="1"/>
<pinref part="D1" gate="G$1" pin="A"/>
<wire x1="-27.94" y1="111.76" x2="-27.94" y2="106.68" width="0.1524" layer="91"/>
</segment>
</net>
<net name="DCP" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="DECOUPLE"/>
<pinref part="C1" gate="G$1" pin="1"/>
<wire x1="111.76" y1="71.12" x2="142.24" y2="71.12" width="0.1524" layer="91"/>
<wire x1="142.24" y1="71.12" x2="142.24" y2="68.58" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$4" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="AVDD_2"/>
<pinref part="JP1" gate="G$1" pin="2"/>
<wire x1="43.18" y1="58.42" x2="38.1" y2="58.42" width="0.1524" layer="91"/>
<wire x1="38.1" y1="58.42" x2="38.1" y2="50.8" width="0.1524" layer="91"/>
<junction x="38.1" y="58.42"/>
<pinref part="U1" gate="G$1" pin="AVDD_0"/>
<wire x1="38.1" y1="50.8" x2="43.18" y2="50.8" width="0.1524" layer="91"/>
</segment>
</net>
<net name="+R" class="0">
<segment>
<pinref part="G1" gate="G$1" pin="+$2"/>
<pinref part="JP3" gate="G$1" pin="2"/>
<wire x1="48.26" y1="10.16" x2="40.64" y2="10.16" width="0.1524" layer="91"/>
<label x="41.402" y="10.414" size="1.778" layer="95"/>
</segment>
</net>
<net name="+L" class="0">
<segment>
<pinref part="G1" gate="G$1" pin="+$1"/>
<pinref part="JP2" gate="G$1" pin="2"/>
<wire x1="48.26" y1="15.24" x2="40.64" y2="15.24" width="0.1524" layer="91"/>
<label x="41.656" y="16.002" size="1.778" layer="95"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
<errors>
<approved hash="104,1,43.18,27.94,G1,+,N$1,,,"/>
<approved hash="104,1,53.34,27.94,G1,-,VSS,,,"/>
<approved hash="104,1,88.9,20.32,U2,GND,VSS,,,"/>
<approved hash="104,1,43.18,76.2,U1,IOVDD_0,VCC,,,"/>
<approved hash="104,1,43.18,58.42,U1,AVDD_2,N$4,,,"/>
<approved hash="104,1,43.18,50.8,U1,AVDD_0,N$4,,,"/>
<approved hash="104,1,111.76,73.66,U1,VDD_DREG,VCC,,,"/>
<approved hash="104,1,111.76,55.88,U1,IOVDD_5,VCC,,,"/>
</errors>
</schematic>
</drawing>
<compatibility>
<note version="8.2" severity="warning">
Since Version 8.2, EAGLE supports online libraries. The ids
of those online libraries will not be understood (or retained)
with this version.
</note>
<note version="8.3" severity="warning">
Since Version 8.3, EAGLE supports URNs for individual library
assets (packages, symbols, and devices). The URNs of those assets
will not be understood (or retained) with this version.
</note>
<note version="8.3" severity="warning">
Since Version 8.3, EAGLE supports the association of 3D packages
with devices in libraries, schematics, and board files. Those 3D
packages will not be understood (or retained) with this version.
</note>
</compatibility>
</eagle>
