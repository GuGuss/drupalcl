<?php
/**
 * @file
 * drupal_chile_common.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function drupal_chile_common_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'home';
  $preset->title = 'Home';
  $preset->theme = 'classic';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'linear',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 1,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '210',
    'itemMargin' => '0',
    'minItems' => '3',
    'maxItems' => '3',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 1,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => 'Anterior',
    'nextText' => 'Siguiente',
    'pausePlay' => 0,
    'pauseText' => 'Pausa',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 1,
    'animationLoop' => 1,
    'pauseOnAction' => 1,
    'pauseOnHover' => 0,
    'manualControls' => '',
  );
  $export['home'] = $preset;

  return $export;
}
