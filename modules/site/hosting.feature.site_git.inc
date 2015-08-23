<?php

/**
 * @file
 *   The hosting feature definition for hosting_site_git.
 */

/**
 * Register a hosting feature with Aegir.
 *
 * This will be used to generate the 'admin/hosting' page.
 *
 * @return
 *  associative array indexed by feature key.
 */
function hosting_site_git_hosting_feature() {
  $features['site_git'] = array(
    // title to display in form
    'title' => t('Git integration for sites'),
    // description
    'description' => t('Enables deployment of sites from Git.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_site_git',
    'group' => 'advanced',
  );

  return $features;
}
