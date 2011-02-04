<?php

/*
  * Administer Simpleshare Settings
  * @ingroup forms
  */
  
function simpleshare_admin_settings() {
  //load node types
  $options = node_get_types('names');
  
  $form['simpleshare_facebook_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook Application ID'),
    '#default_value' => variable_get('simpleshare_facebook_id', NULL),
    '#description' => t('Sharing content on Facebook requires an application. <a target="_blank" href="http://www.facebook.com/developers/createapp.php">Create an app</a> then enter the application id here')
    
  );
  
  $form['simpleshare_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Which types should users be allowed to share?'),
    '#options' => $options,
    '#default_value' => variable_get('simpleshare_node_types', array('story')),
    '#description' => t('Any node types selected here will be available for sharing')
    
  );
  
  return system_settings_form($form);
}