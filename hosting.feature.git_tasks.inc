<?php

/**
 * @file
 *   The hosting feature definition for hosting_git.
 */

/**
 * Register a hosting feature with Aegir.
 *
 * This will be used to generate the 'admin/hosting' page.
 *
 * @return
 *  associative array indexed by feature key.
 */
function hosting_git_hosting_feature() {
  $features['git'] = array(
    'title' => t('Git integration'),
    'description' => t('Enables storing git information. Dependency for other git modules.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_git',
    'group' => 'advanced',
  );

  $features['git_pull'] = array(
    'title' => t('Git pull task'),
    'description' => t('Enables git pull tasks on sites and platforms.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_git_pull',
    'group' => 'experimental',
    'role_permissions' => array(
      'aegir platform manager' => array(
        'create platform git-pull task',
      ),
      'aegir account manager' => array(
        'create git-pull task',
      ),
      'aegir client' => array(
        'create git-pull task',
      ),
    )
  );

  $features['git_checkout'] = array(
    'title' => t('Git checkout task'),
    'description' => t('Enables git checkout tasks on sites and platforms.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_git_checkout',
    'group' => 'experimental',
    'role_permissions' => array(
      'aegir platform manager' => array(
        'create platform git-checkout task',
      ),
      'aegir account manager' => array(
        'create git-checkout task',
      ),
      'aegir client' => array(
        'create git-checkout task',
      ),
    )
  );

  return $features;
}
