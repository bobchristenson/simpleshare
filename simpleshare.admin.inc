<?php

/*
  * Administer Simpleshare Settings
  * @ingroup forms
  */
  
function simpleshare_admin_settings() {
  //load node types
  $options = node_get_types('names');
  
  $form['simpleshare_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Which types should users be allowed to share?'),
    '#options' => $options,
    '#default_value' => variable_get('simpleshare_node_types', 0),
    '#description' => t('Any node types selected here will be available for sharing')
    
  );
  
  return system_settings_form($form);
}