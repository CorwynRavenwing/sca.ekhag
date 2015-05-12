<?
# NOTE: all these files are identical. Changes to one
#	should be copied to all the others.

include "site/vars.inc";

# LINKING FUNCTIONS

# do an arbitrary <a href=...> link
function a_href($url, $newwindow) {
  global $boldlinks;
  echo "\n<a href='" . $url . "'";
  if ($newwindow) echo " target='_blank'";
  echo ">";
  if ($boldlinks) echo "<b>";
}

# do </a> end link
function a_end() {
  global $boldlinks;
  if ($boldlinks) echo "</b>";
  echo "</a>\n";
}

# do an entire link
function do_link($url, $tag, $newwindow) {
  a_href($url, $newwindow);
  echo $tag;
  a_end();
}

# SOOTHING FUNCTIONS

# translate a URL into a soothed link
function soothed_url($url) {
  global $webroot;
  return $webroot . "/soothlink.html?url=" . urlencode($url);
}

# do an arbitrary <a href=...> link, soothed
function a_sooth($url) {
  a_href( soothed_url($url), 1);	# sooth -> always new window
}

# do the entire link, soothed; if no tag is given, use url as tag
function sooth($url, $tag) {
  if ($tag == "") { $tag = $url; }
  a_sooth($url);
  echo $tag;
  a_end();
}

function sooth_flag($url, $tag, $recognized) {
  if ($url == "") {
    // no link
    echo $tag;
  } elseif ($recognized) {
    // recognized link
    do_link($url, $tag, 1);	// always new window
  } else {
    // unrecognized link
    sooth($url, $tag);
  }
}

# EMAIL FUNCTIONS
function email($address) {
  // $address = str_replace("@", "&#64;", $address);
  // or, could replace *each* character with "&#" . ascii(c) . ";"
  $address = str_replace("@", " (at) ", $address);
  $address = str_replace(".", " (dot) ", $address);
  echo "\n<a href='mailto:"
    . $address
    . "'>"
    . $address
    . "</a>\n";
}

function no_email($address) {
  # NOTE: doesn't print $address anywhere!  This is by design!
  echo "<b>(no email on file)</b>";
}

function email_flag($address, $permission) {
    if ($address == "") {
        // blank address
        no_email($address);
    } elseif ($permission) {
        // address with permission
        email($address);
    } else {
        // address without permission
        no_email($address);
    }
}
?>
