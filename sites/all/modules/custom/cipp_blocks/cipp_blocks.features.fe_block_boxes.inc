<?php
/**
 * @file
 * cipp_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cipp_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Open Puerto Rico Blog';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'blog_header';
  $fe_block_boxes->body = '<h2>Open Puerto Rico Blog</h2>';

  $export['blog_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Links';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'cipp_social';
  $fe_block_boxes->body = '<a href="https://facebook.com" class="facebook" title="Visit us on Facebook">Visit us on Facebook</a>
<a href="https://twitter.com" class="twitter" title="Visit us on Twitter">Visit us on Twitter</a>
<a href="https://plus.google.com" class="google" title="Visit us on Google+">Visit us on Google+</a>';

  $export['cipp_social'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Featured Visualization';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'front_featured';
  $fe_block_boxes->body = 'Nunc posuere, nisl eget lacinia tempus, ipsum mauris dapibus ligula, eget laoreet odio turpis sed urna. Sed auctor hendrerit nunc, non euismod purus pulvinar ut. Vivamus sed ante quis tortor sodales rhoncus non vel est. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi scelerisque justo et ante dictum, tincidunt posuere magna commodo! Nulla facilisi. Praesent feugiat venenatis dolor in luctus.';

  $export['front_featured'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Help Improve Open PR';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'front_help';
  $fe_block_boxes->body = '<strong>Got an Idea?</strong>  
Aliquam imperdiet auctor lacus sed fermentum. Aenean eget elit rhoncus, malesuada enim id, consectetur nibh. Phasellus dolor turpis, semper sit amet elit nec, porta faucibus felis. Maecenas consequat vulputate libero. Sed interdum rhoncus sodales.
<p><a href="">Submit your idea</a></p>

<strong>Developers, developers!</strong>  
In hac habitasse platea dictumst. Interdum et malesuada fames ac ante ipsum primis in faucibus. Praesent semper, risus at aliquam congue, orci turpis lacinia purus, et accumsan magna justo at sapien. Pellentesque vel justo et felis vestibulum rhoncus at sed metus. Nunc vitae nisl hendrerit, ultrices nibh massa nunc.</p>
<p><a href="">Developer\'s Center</a></p>';

  $export['front_help'] = $fe_block_boxes;

  return $export;
}
