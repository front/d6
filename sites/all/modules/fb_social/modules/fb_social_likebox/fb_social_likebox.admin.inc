<?php
//$Id: fb_social_likebox.admin.inc,v 1.1.2.1 2010/05/07 02:48:56 ferdi Exp $

/**
 * Settings form for choosing the operating mode of purl
 */
function fb_social_likebox_settings_form(){
  $form = array();

  $form['widget_setings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Widget settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['widget_setings']['fb_social_likebox_pageid'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook Page ID'),
    '#description' => t('The ID of the facebook page for this like box'),
    '#default_value' => variable_get('fb_social_likebox_pageid', ''),
  );
  
  $form['widget_setings']['fb_social_likebox_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#description' => t('The width of the wiget in pixel'),
    '#default_value' => variable_get('fb_social_likebox_width', 292),
  );
  
  $form['widget_setings']['fb_social_likebox_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#description' => t('The height of the wiget in pixel'),
    '#default_value' => variable_get('fb_social_likebox_height', ''),
  );
  
  $form['widget_setings']['fb_social_likebox_connections'] = array(
    '#type' => 'textfield',
    '#title' => t('Connections'),
    '#description' => t('Note: To provide you with better performance, we cache your stylesheet. If you update your stylesheet, you should use a cachebreaker in the URL to the stylesheet, typically by appending a version number to the .CSS file extension, as in http://www.example.com/my.css?2'),
    '#default_value' => variable_get('fb_social_likebox_connections', 10),
  );
  
  $form['widget_setings']['fb_social_likebox_stream'] = array(
    '#type' => 'radios',
    '#title' => 'Show stream',
    '#description' => t('Show the profile stream for the public profile'),
    '#default_value' => variable_get('fb_social_likebox_stream', 1),
    '#options' => array(t('False'), t('True')),
  );
  
  $form['widget_setings']['fb_social_likebox_header'] = array(
    '#type' => 'radios',
    '#title' => t('Show header'),
    '#description' => t('Show the "find us on facebook" bar at the top. Only shown when either stream or connections are present'),
    '#default_value' => variable_get('fb_social_likebox_header', 1),
    '#options' => array(t('False'), t('True')),
  );
  
  $form = system_settings_form($form);
  return $form;
}