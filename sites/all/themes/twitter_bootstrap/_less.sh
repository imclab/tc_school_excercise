# Create min css file
lessc --yui-compress bootstrap/less/bootstrap.less > bootstrap/css/bootstrap.min.css
lessc --yui-compress bootstrap/less/responsive.less > bootstrap/css/bootstrap-responsive.min.css

# Create debug css file
lessc bootstrap/less/bootstrap.less > bootstrap/css/bootstrap.css
lessc bootstrap/less/responsive.less > bootstrap/css/bootstrap-responsive.css

# Clear all cache
/Users/quang.pham/Dev/lib/drush/drush cc all