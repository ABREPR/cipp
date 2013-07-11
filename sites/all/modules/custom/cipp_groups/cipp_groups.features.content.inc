<?php
/**
 * @file
 * cipp_groups.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function cipp_groups_content_defaults() {
  $content = array();

  $content['group_agencies'] = (object) array(
    'exported_path' => 'group/agencies',
    'title' => 'Agencies',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373486555,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_agencies',
    'body' => array(),
    'sort_value' => 4,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 100,
          'height' => 81,
          'filename' => 'agencies.png',
          'uri' => 'public://agencies.png',
          'filemime' => 'image/png',
          'filesize' => 3555,
          'status' => 1,
          'type' => 'image',
          'uuid' => '888179bf-a514-4543-b7d3-47c6a5bc7311',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAGQAAABRCAMAAAATi/N4AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpCNTk5RjI0MkUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpCNTk5RjI0M0UxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkI1OTlGMjQwRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkI1OTlGMjQxRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+ujvSyQAAAwBQTFRFKysr2ev2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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );

  $content['group_economy'] = (object) array(
    'exported_path' => 'group/economy',
    'title' => 'Economy',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373512014,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_economy',
    'body' => array(),
    'sort_value' => 5,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 88,
          'height' => 75,
          'filename' => 'economy.png',
          'uri' => 'public://economy.png',
          'filemime' => 'image/png',
          'filesize' => 3937,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'f0acbb19-f7c9-4f62-86e0-d1c24c105ae1',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAFgAAABLCAMAAADDCbAzAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpCNTk5RjI0NkUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpCNTk5RjI0N0UxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkI1OTlGMjQ0RTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkI1OTlGMjQ1RTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+Vse1EQAAAwBQTFRFw97zzc3N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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
  );

  $content['group_education'] = (object) array(
    'exported_path' => 'group/education',
    'title' => 'Education',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373512125,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_education',
    'body' => array(),
    'sort_value' => 7,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 97,
          'height' => 92,
          'filename' => 'education.png',
          'uri' => 'public://education.png',
          'filemime' => 'image/png',
          'filesize' => 3291,
          'status' => 1,
          'type' => 'image',
          'uuid' => '8e2dbe83-70e3-4889-b056-5c5038c2e19a',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAGEAAABcCAMAAABJPCviAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpGNDBDQjQ2QkUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpGNDBDQjQ2Q0UxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkY0MENCNDY5RTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkY0MENCNDZBRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+LrRj2QAAAwBQTFRF////JCQk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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
  );

  $content['group_environmental'] = (object) array(
    'exported_path' => 'group/environmental',
    'title' => 'Environmental',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373512177,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_environmental',
    'body' => array(),
    'sort_value' => 8,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 85,
          'height' => 101,
          'filename' => 'environmental.png',
          'uri' => 'public://environmental.png',
          'filemime' => 'image/png',
          'filesize' => 5831,
          'status' => 1,
          'type' => 'image',
          'uuid' => '9c52c8d0-0b85-4cbe-beb7-4af67d858a32',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAFUAAABlCAMAAAALUV/FAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpGNDBDQjQ2RkUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpGNDBDQjQ3MEUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkY0MENCNDZERTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkY0MENCNDZFRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+36vVBQAAAwBQTFRFx97yV1dW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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
  );

  $content['group_geodata'] = (object) array(
    'exported_path' => 'group/geodata',
    'title' => 'Geodata',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373512225,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_geodata',
    'body' => array(),
    'sort_value' => 9,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 99,
          'height' => 99,
          'filename' => 'geodata.png',
          'uri' => 'public://geodata.png',
          'filemime' => 'image/png',
          'filesize' => 4942,
          'status' => 1,
          'type' => 'image',
          'uuid' => '4b2accbe-d424-4287-a72c-a3c006616e8b',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAGMAAABjCAMAAAC45U6nAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoxOTVBRDhEQUUxQTExMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDoxOTVBRDhEQkUxQTExMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjE5NUFEOEQ4RTFBMTExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjE5NUFEOEQ5RTFBMTExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+BChKTgAAAwBQTFRF0OTzpaWl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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
  );

  $content['group_health'] = (object) array(
    'exported_path' => 'group/health',
    'title' => 'Health',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373512067,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_health',
    'body' => array(),
    'sort_value' => 6,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 80,
          'height' => 80,
          'filename' => 'health.png',
          'uri' => 'public://health.png',
          'filemime' => 'image/png',
          'filesize' => 2110,
          'status' => 1,
          'type' => 'image',
          'uuid' => '43678b85-4f2b-49c0-9d36-eaacb95067cc',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAFAAAABQCAMAAAC5zwKfAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpGNDBDQjQ2N0UxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpGNDBDQjQ2OEUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkI1OTlGMjQ4RTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkY0MENCNDY2RTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+Kp/dUQAAAexQTFRF////MarhL6vhMarfMKng5e/5L6vfMa3j6fL5Ua/ixd7y8vf7N6rgMKne//7//v//yeDygb/mMKzi///9oczsLqrgLqreMKvkmMjsMazl/v7+L6rjOKvhMqvgManeMarjMqvi6PP5Lqvj8/b9//3+Mqnjxd70UbDg4/D5MqrfLqrd8/b7x93y/v7//v/9ULDi//78oM3sM6rk8vf9w9/09Pf+L6ziMqnh6vP4M6zjmMnq/P/9Majgxt/z/f/8NqvgMand/P//RK7g4u/4o8vu8/b/5/H7L6rlVa/hlsnoL6veWbTjy+Dz5/L2ULDgrNHsLqvh9Pn/7PP7MqreNKnfNKneLq3gL6zkmcfoNqvhzd/zlsjpR7Dg+//85O74MK3lw97vUbHjwd31Lazjw97ziMLo8/j8N6zi/v786PL8MKzgOKrcstLrnsvoM6zl6PH4UbLnLqniNarflsbq6/D0VLDj5/H6S7DkMKrd6/L85e71l8nqMK3jL67loc3o7PH3+vr8g77m+///+Pn7///7T7DjOariLargLqzfuNbw8fb6Larimsjq8Pj73uv0//79OqzgxN3xUrHhLqze2Oj14/D4//38l8jooc3qNKvlPKvgxN/0L6jf7fT6/f7/9Pn92+fz2+v4L63g9Pf8Pm1K2QAAArhJREFUeNrsmeVz2zAYxl/JqpOCpS2u3CUOdGVmWrvCmJmZmZnXMTMz/qOTst4+SNZd08uHbefHF39Q7vlJr53T88YGCFJCHDdOTzbo+p7PLcyFnFWATTo5FSYiM3A4z0BUMkEgMikZzS+QJKOJfAP/8pJRMt83pSQaAkNgCAyB/yHQpdrIFwZQxc7K3R7JlFNkP1sJlN7SURToALzaXaSqqabo+WBTzeEsMEgf7g92feyq0Yzbm3Y+gVORKxFF8XgkJo5dxpBaN3J5W7zsqOqL9MQjR6D/vWcpQo4jP6mAarOyzvvIQYirvkzDSE8pLPA91YARIShG0iYgsZbzg46YWFNvrB3WI6zOZDuYO9i3iKHke9WkfLqNfM2Xxj/aYVMH13oX4uN6/BCZgNbdVZ5P7IWqr55Xl8+G/gp1IstBPlljVThZYEDdPuINvWL9qg/b9WuvwhRsoXzJsmKlITAEhsAQ+K8CL3Vo457YYgkRE2HMg2KF44bMJ+RpWWSlcaoUHlncViQwMc5lsCHOuR4E1c5LESokpfq8ExmxwrdILxljz5OhRmTjELRClMGO/gXBqfJ30H6uUFdr7Y7aF8enyZgKANqxRfMLa1tbVdfSM7c3L4OblXOKVTV2NlauKP5mAqKZ37uLH+9tVG3dnT8rr8EMoBDU9jRDXbZX4jpv3oY+F2gVU00DlIk/5iygH3NZmzi/JoG9F0Krk6PAXN1JaYs8uzoyIYfcgt8/G/0uO8MXEiyoLDYkVxL22CEwBIbAEGgSc8V2nDA/JU7v6xObPc0BSAWQwlbLoNShuXTI3TJ+oowaEVN1f/JW1Z0lLTLFcikaXMrqjA/Gk1ERee743wa4NCGBs7wxOYpQyTG3WeRvDkCA/cAuxsdUpqjCPtAGT3N7XSEv+INJBm1c/FVclTfBxF8CDAAYxGvRK4F1UwAAAABJRU5ErkJggg==',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
  );

  $content['group_judicial'] = (object) array(
    'exported_path' => 'group/judicial',
    'title' => 'Judicial',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373478126,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_judicial',
    'body' => array(),
    'sort_value' => 2,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 105,
          'height' => 95,
          'filename' => 'judicial.png',
          'uri' => 'public://judicial.png',
          'filemime' => 'image/png',
          'filesize' => 5059,
          'status' => 1,
          'type' => 'image',
          'uuid' => '52990c34-880b-4793-a6f6-866403fd407a',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAGkAAABfCAMAAADcfxm4AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo3RUEwN0M3REUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo3RUEwN0M3RUUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjdFQTA3QzdCRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjdFQTA3QzdDRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+kewL5QAAAwBQTFRFY2Nj6Ojo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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );

  $content['group_legislative'] = (object) array(
    'exported_path' => 'group/legislative',
    'title' => 'Legislative',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373485660,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_legislative',
    'body' => array(),
    'sort_value' => 3,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 70,
          'height' => 92,
          'filename' => 'legislative.png',
          'uri' => 'public://legislative.png',
          'filemime' => 'image/png',
          'filesize' => 3706,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'cf4fcbe6-649e-4324-b605-56115ce06a7e',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAEYAAABcCAMAAADkvTNLAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpCNTk5RjIzRUUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpCNTk5RjIzRkUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjdFQTA3QzdGRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjdFQTA3QzgwRTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+9jFilgAAAwBQTFRFZKvWSa7i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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );

  $content['group_municipal'] = (object) array(
    'exported_path' => 'group/municipal',
    'title' => 'Municipal',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373477476,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'group_municipal',
    'body' => array(),
    'sort_value' => 1,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 93,
          'height' => 62,
          'filename' => 'municipal.png',
          'uri' => 'public://municipal.png',
          'filemime' => 'image/png',
          'filesize' => 4384,
          'status' => 1,
          'type' => 'image',
          'uuid' => '85b55407-c3bf-4fc0-a458-341dbbacc005',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAAF0AAAA+CAMAAAB+z+cFAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo3RUEwN0M3OUUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo3RUEwN0M3QUUxQTAxMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjdFQTA3Qzc3RTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjdFQTA3Qzc4RTFBMDExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+ZW8Z3QAAAwBQTFRFJCEdJSMk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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );

  $content['groups_other'] = (object) array(
    'exported_path' => 'group/other',
    'title' => 'Other',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'group',
    'language' => 'es',
    'created' => 1373512287,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'groups_other',
    'body' => array(),
    'sort_value' => 10,
    'field_image' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => 56,
          'height' => 81,
          'filename' => 'other.png',
          'uri' => 'public://other.png',
          'filemime' => 'image/png',
          'filesize' => 3189,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'f80a06f2-0c8e-41be-8790-8cb548719f61',
          'rdf_mapping' => array(),
          'image' => 'iVBORw0KGgoAAAANSUhEUgAAADgAAABRCAMAAACwo5W+AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyRpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMy1jMDExIDY2LjE0NTY2MSwgMjAxMi8wMi8wNi0xNDo1NjoyNyAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNiAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoxOTVBRDhERUUxQTExMUUyOEE0QTkzRUIzNjEwMDlBMSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDoxOTVBRDhERkUxQTExMUUyOEE0QTkzRUIzNjEwMDlBMSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjE5NUFEOERDRTFBMTExRTI4QTRBOTNFQjM2MTAwOUExIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjE5NUFEOERERTFBMTExRTI4QTRBOTNFQjM2MTAwOUExIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+iialrwAAAwBQTFRFbGxssLCw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',
        ),
      ),
    ),
    'field_group_type' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
  );

return $content;
}
