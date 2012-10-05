# Create min css file
lessc --yui-compress bootstrap/less/bootstrap.less > bootstrap/css/bootstrap.min.css
lessc --yui-compress bootstrap/less/bootstrap-responsive.css.less > bootstrap/css/bootstrap-responsive.css.min.css
lessc --yui-compress css/override.less > css/override.min.css

# Create debug css file
lessc bootstrap/less/bootstrap.less > bootstrap/css/bootstrap.css
lessc bootstrap/less/bootstrap-responsive.css.less > bootstrap/css/bootstrap-responsive.css.css
lessc css/override.less > css/override.css

# Clear all cache
/Users/quang.pham/Dev/lib/drush/drush cc all