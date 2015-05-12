<? include "sooth.inc"; ?>

<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
  <title>Tisane</title>

</head>
<body link="#660066" vlink="#006600" alink="#663300" bgcolor="#669966">
<p align="JUSTIFY">
<img border="0" src="images/tisane_logo.gif" align="left" width="262" height="100"><b><font face="arial" size="2">
	ti-sane - ti-'zan, - 'zan, n. <i>Etymology: Middle English,from MiddleFrench, from Latin
prisana, from Greek ptisanE, literally, crushed barley, from ptissein to crush - date: 14th century: an infusion (as of dried herbs) used as a beverage or for medicinal effects.
</i></font></b>

<p align="justify">

<p align="center">
<b>The quarterly newsletter of the (SCA) East Kingdom Herbalists' and Apothecaries' Guild</b>
<p align="center">
<img border="0" src="images/rosemarychain.gif" width="419" height="73">
<p>
Tisane is a hard-copy newsletter. <br>
You can subscribe by contacting the
<!--
was jafath@aol.com
-->
Chronicler at <? email("joanne@jafath.com"); ?>, or you can read it here.
<p>

<table border="1" cellpadding="0" cellspacing="0" width="100%">

<?
$dir = "tisane_issues/";

$files_array = array();
// Open a known directory, and proceed to read its contents
if (is_dir($dir)) {
	if ($dh = opendir($dir)) {
		while (($file = readdir($dh)) !== false) {
			if (filetype($dir . $file) == 'file') {
				array_push($files_array, $file);
			} // endif filetype
		} // next file
		closedir($dh);
	} // endif opendir
} // endif is_dir

$years_array = array();
$files_bymonth_array = array();

foreach ($files_array as $file) {
	$comments = "";
	
	$pattern = '/^tisane-([0-9][0-9][0-9][0-9])-([0-9][0-9]).pdf$/';
	
	if ( preg_match($pattern, $file, $matches) ) {
		$year = $matches[1];
		$month = $matches[2];
		$comments = "year: $year, month: $month.";
		$years_array[$year]++;
		$files_bymonth_array["$year-$month"] = $file;
	} else {
		$comments = "no match";
	} // endif match
	# echo "filename: $file : $comments<br />\n";
} // next file

krsort($years_array);

$months_array = array(
	'03' => 'March',
	'06' => 'June',
	'09' => 'September',
	'12' => 'December',
);

foreach ($years_array as $year => $count) {
	?>
	<tr>
		<td>
			<font face="arial" size="+1"><b><?=$year?>:</b></font>
		</td>
		
	<?
	
	foreach ($months_array as $month => $monthname) {
		$file = $files_bymonth_array["$year-$month"];
		if (isset($file)) {
			?>
		<td>
			<img src="images/but096.gif" width="25" height="25" hspace="8">
			<a title="Open the <?=$monthname?> <?=$year?> issue in a new window." href="<?=$dir?><?=$file?>" target="_new">
				<font face="arial"><b><?=$monthname?></b></font>
			</a>
		</td>
			<?
		} else {
			?>
		<td>
			<img src="images/but096.gif" width="25" height="25" hspace="8">
			<a title="There is no <?=$monthname?> <?=$year?> issue.">
				<font face="arial">(<?=$monthname?>)</font>
			</a>
		</td>
			<?
		} // endif isset file
	} // next month
} // next year

?>

</table>

<p>
To find out more about us, go to
<? sooth("http://www.yahoogroups.com/subscribe/SCA-Herbalist", "www.yahoogroups.com/subscribe/SCA-Herbalist"); ?>
<p><img border="0" src="images/mortar_pestle2sm.gif" align="absmiddle" width="70" height="86"><a href="index.html">Return
Home</a>
</body>
</html>
