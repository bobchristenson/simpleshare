<?php
/**
 * @file
 * @see simpleshare-modal.tpl.php
 * @see theme_simpleshare_modal()
 *
 * Build out the facebook and twitter links
 */
 
/*Implementaiton of template_preprocess
*/
function template_preprocess_simpleshare_modal(&$variables, $node) {
  $node = $variables['node'];
  $fb_appid = variable_get('simpleshare_facebook_id', NULL);
  $link = url('node/' . $node->nid, array('absolute' => TRUE));
  $title = $node->title;
  $description = $node->teaser;
  $redirect = url('node/' . $node->nid, array('absolute' => TRUE, 'query' =>array('simpleshare' => 'success')));
  
   
   //build the fb path
  $fb_path = url('http://www.facebook.com/dialog/feed');
  $fb_query = array('app_id' => $fb_appid, 'link' => $link, 'name' => $title, 'description' => $description, 'redirect_uri' =>$redirect, 'display' => 'popup');
  
  $fb_link = l('Share on Facebook', $fb_path, array('query' =>$fb_query, 'attributes' => array('class' => 'simpleshare-popup')));
 
  //build the twitter path
  $twit_path = url('http://twitter.com/share');
  $twit_query = array('url' => $link, 'text' => $title);
  
  $twitter_link = l('Share on Twitter', $twit_path, array('query' =>$twit_query, 'attributes' => array('class' => 'simpleshare-popup')));
  
  if($fb_appid) {
    //if theres no app id we want this to return false
    $variables['fb_link'] =  $fb_link;
  } else {
    $variables['fb_link'] = NULL;
  };
  $variables['twitter_link'] =  $twitter_link;

}