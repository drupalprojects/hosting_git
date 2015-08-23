<?php

/**
 * @file
 *   The hosting feature definition for hosting_platform_git.
 */

/**
 * Register a hosting feature with Aegir.
 *
 * This will be used to generate the 'admin/hosting' page.
 *
 * @return
 *  associative array indexed by feature key.
 */
function hosting_platform_git_hosting_feature() {
  $features['platform_git'] = array(
    'title' => t('Git integration for platforms'),
    'description' => t('Enables deployment of platforms via Git.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_platform_git',
    'group' => 'advanced',
  );

  return $features;
}
