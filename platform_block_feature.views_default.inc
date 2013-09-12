<?php
/**
 * @file
 * platform_block_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function platform_block_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'top_facet_searches';
  $view->description = 'Google Analytics integration, top facet searches';
  $view->tag = 'islandora';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Top Facet Searches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Facet Searches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'searchCategory' => 'searchCategory',
    'searchResultViews' => 'searchResultViews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'searchCategory' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'searchResultViews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Internal Search Dimensions: ga:searchCategory */
  $handler->display->display_options['fields']['facet']['id'] = 'facet';
  $handler->display->display_options['fields']['facet']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['facet']['field'] = 'searchCategory';
  $handler->display->display_options['fields']['facet']['label'] = 'Facet Terms';
  $handler->display->display_options['fields']['facet']['alter']['path'] = '[facet]';
  /* Field: Internal Search Metrics: ga:searchResultViews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal Search Metrics: ga:searchResultViews */
  $handler->display->display_options['sorts']['searchResultViews']['id'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['searchResultViews']['field'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['top_facet_searches'] = $view;

  $view = new view();
  $view->name = 'top_site_searches';
  $view->description = 'Google Analytics integration, top site searches';
  $view->tag = 'islandora';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Top Site Searches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Site Searches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '14';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'searchKeyword' => 'searchKeyword',
    'searchResultViews' => 'searchResultViews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'searchKeyword' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'searchResultViews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Internal Search Dimensions: ga:searchKeyword */
  $handler->display->display_options['fields']['search']['id'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['search']['field'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['label'] = 'Search Terms';
  /* Field: Internal Search Metrics: ga:searchResultViews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal Search Metrics: ga:searchResultViews */
  $handler->display->display_options['sorts']['searchResultViews']['id'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['searchResultViews']['field'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Top Site Searches';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You need to configure Google Analytics to show the Top Site Searches';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $export['top_site_searches'] = $view;

  return $export;
}
