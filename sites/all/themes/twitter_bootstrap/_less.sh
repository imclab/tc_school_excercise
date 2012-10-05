lessc --yui-compress bootstrap/less/bootstrap.less > bootstrap/css/bootstrap.min.css
lessc --yui-compress css/override.less > css/override.min.css

lessc bootstrap/less/bootstrap.less > bootstrap/css/bootstrap.css
lessc css/override.less > css/override.css

/Users/quang.pham/Dev/lib/drush/drush cc all