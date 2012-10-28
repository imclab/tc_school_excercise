<?php	
	//include path_to_theme().'/templates/_include/header_nav.php';
	//include path_to_theme().'/templates/_include/header_nav_original.php';
	
	//print render (file_create_url($node->field_splash_page_picture['und'][0]['uri'])); 
	// print count($node->field_splash_page_picture);
	// print count($node->field_splash_page_text);
	// //print_r($node->field_splash_page_picture['und']);
	
	// if (isset($node->field_splash_page_picture)) echo 'aYES';
	// echo count($node->field_splash_page_picture);
	// print '<pre>';
	// 
	// print_r($node);
	// print '</pre>';
	
?>

<!-- NAVIGATION -->
<nav id="top-nav">
	<div class="container">
		<a id="logo" href="/">
			<img src="<?php print '/'.path_to_theme().'/bootstrap/img/logo70x50.png';?>">
		</a>
		<?php if ($primary_nav): ?>
		  <?php print $primary_nav; ?>
		<?php endif; ?>
	</div>
</nav>
<!-- END OF NAVIGATION -->

<!-- SPLASH -->
<!-- If node contain splash image ?-->
<?php if ((isset($node->field_splash_page_picture)) && (count($node->field_splash_page_picture))) : ?>
	<section style="background-image: url(&quot;<?php echo render(file_create_url($node->field_splash_page_picture['und'][0]['uri']));?>&quot;); background-size: cover; height:<?php echo $node->field_splash_page_picture['und'][0]['height'];?>px;" class="background-cover" id="top-splash">
		<div class="container">
			<div class="centerbox">
				<?php
					if ($node->field_splash_page_heading) {
						echo '<h1>'.$node->field_splash_page_heading['und'][0]['value'].'</h1>';
					}
					if ($node->field_splash_page_text) {
						echo '<h2>'.$node->field_splash_page_text['und'][0]['value'].'</h2>';
					}
				?>
			</div>
		</div>
	</section>
	<div class="gradient-separator"></div>
<!-- If node doesn't contain splash image-->	
<?php else: ?>
<section style="" class="background-cover" id="top-splash">
	<div class="container">
	</div>
</section>
<?php endif; ?>
<!-- END OF SPLASH -->


<div class="container">
	
  <header role="banner" id="page-header">
    <?php if ( $site_slogan ): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#header -->
	
	<div class="row">
	  
    <?php if ($page['sidebar_first']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>  
	  
	  <section class="<?php print _twitter_bootstrap_content_span($columns); ?>">  
      <?php if ($page['highlighted']): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if ($breadcrumb): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if ($tabs): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if ($page['help']): ?> 
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

			<?php 
				// QUANG custom feed page
				// if ($node->nid !=41) 
				// 	print render($page['content']);
				// else 
				// 	include path_to_theme().'/templates/_include/feed-page.php';
			
			?>
      <?php print render($page['content']); ?>













	  </section>

    <?php if ($page['sidebar_second']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
  <footer class="footer container">
    <?php print render($page['footer']); ?>
  </footer>
</div>


	

