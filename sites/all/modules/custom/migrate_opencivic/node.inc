<?php


class UserMigration extends DrupalUser7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('roles', 'roles')
      ->sourceMigration('role');
  }
}

class OCTermsMigration extends DrupalTerm7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('path', 'path')
      ->callbacks(array($this, 'checkPath'));
  }

  protected function checkPath($value) {
    // drush_print($value);
    $value = preg_replace('#category/news/#', 'taxonomy/oc_tags/', $value);
    drush_print($value);
    return $value;
  }
}

class ApplicationsMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_oc_app_contributor', 'field_contributor');
    $this->addFieldMapping('field_oc_app_creator', 'field_creator')
      ->sourceMigration('organizations');

    $this->addFieldMapping('field_oc_app_download_url', 'field_download_url');
    $this->addFieldMapping('field_oc_app_feature_list', 'field_feature_list');
    $this->addFieldMapping('field_oc_file_attachments', 'field_file_attachments');
    $this->addFieldMapping('field_oc_app_install_url', 'field_install_url');
    $this->addFieldMapping('field_oc_app_related_apps', 'field_related_applications');
    $this->addFieldMapping('field_oc_app_url', 'field_url');
    $this->addFieldMapping('field_oc_app_description', 'field_description');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');

    # Taxonomy terms
    $this->addFieldMapping('field_oc_app_category', 'field_application_category')
        ->sourceMigration('app_function_terms');
    $this->addFieldMapping('field_oc_app_category:source_type')
        ->defaultValue('tid');

    $this->addFieldMapping('field_oc_civic_category', 'field_civic_category')
        ->sourceMigration('civic_sector_terms');
    $this->addFieldMapping('field_oc_civic_category:source_type')
        ->defaultValue('tid');

    $this->addFieldMapping('field_oc_app_license', 'field_license')
        ->sourceMigration('software_license_terms');
    $this->addFieldMapping('field_oc_app_license:source_type')
        ->defaultValue('tid');

    $this->addFieldMapping('field_oc_tags', 'field_keywords')
        ->sourceMigration('tags_terms');
    $this->addFieldMapping('field_oc_tags:source_type')
        ->defaultValue('tid');

    $this->addFieldMapping('field_oc_app_requirements', 'field_requirements')
        ->sourceMigration('requirements_terms');
    $this->addFieldMapping('field_oc_app_requirements:source_type')
        ->defaultValue('tid');

    $this->addFieldMapping('field_oc_app_software_type', 'field_software_type')
        ->sourceMigration('software_type_terms');
    $this->addFieldMapping('field_oc_app_software_type:source_type')
        ->defaultValue('tid');

    // TODO: how to migrate imagefields
    // $arguments = array('source_path' => '/images/event');
    // $this->addFieldMapping('field_oc_logo', 'field_image')
    //     ->arguments($arguments);
    // $this->addFieldMapping('field_oc_app_screenshot', 'field_screenshot');
    // $this->addFieldMapping('field_oc_video', 'field_video');
  }
}

class DeploymentsMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('title_field', 'title_field');
    $this->addFieldMapping('title', 'title_field');

    $this->addFieldMapping('field_oc_coordinates', 'field_coordinates');
    $this->addFieldMapping('field_oc_deploy_location', 'field_location');

    # Reference fields
    $this->addFieldMapping('field_oc_deploy_deployment_of', 'field_deployment_of')
      ->sourceMigration('applications');
    $this->addFieldMapping('field_oc_deploy_member', 'field_member')
      ->sourceMigration('organizations');

    $this->addFieldMapping('field_oc_deploy_url', 'field_url');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('panopoly_wysiwyg_text');
  }
}

class OrganizationsMigration extends DrupalNode7Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('title_field', 'title_field');
    $this->addFieldMapping('field_oc_org_abbreviation', 'field_abbreviation');
    $this->addFieldMapping('field_oc_org_description', 'field_description');
    $this->addFieldMapping('field_oc_org_description:format')
      ->defaultValue('panopoly_wysiwyg_text');
    $this->addFieldMapping('field_oc_org_address', 'field_address');
    $this->addFieldMapping('field_oc_coordinates', 'field_coordinates');
    $this->addFieldMapping('field_oc_org_email', 'field_email');
    $this->addFieldMapping('field_oc_logo', 'field_image');
    $this->addFieldMapping('field_oc_org_member', 'field_member');
    // $this->addFieldMapping('field_oc_org_telephone', 'field_telephone');
    $this->addFieldMapping('field_oc_org_twitter', 'field_twitter');
    $this->addFieldMapping('field_oc_org_url', 'field_url');

    # Taxonomy terms
    $this->addFieldMapping('field_oc_org_additional_type', 'field_additional_type')
      ->sourceMigration('organization_type_terms');
    $this->addFieldMapping('field_oc_org_additional_type:source_type')
      ->defaultValue('tid');

    $this->addFieldMapping('field_oc_org_services', 'field_services')
      ->sourceMigration('organization_service_terms');
    $this->addFieldMapping('field_oc_org_services:source_type')
      ->defaultValue('tid');
  }
}

