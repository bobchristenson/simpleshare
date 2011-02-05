<?php
/**
 * Default theme implementation for simpleshare modal
 *
 * Available variables:
 * - $fb_link: The completed facebook link
 * - $fb_link: The completed twitter link
 * - $node: The node being shared
 *
 * @see template_preprocess_simpleshare_modal()
 * @see theme_simpleshare_modal()
 */
 ?>

<div id="fade" class="simpleshare"></div>
<div id="simpleshare-modal" class="simpleshare">
  <h2><?php print t('Share it!') ?></h2>
  <?php if($fb_link): ?>
    <div id="simpleshare-fb">
      <?php print $fb_link ?>
    </div><!--/fb -->
  <?php endif; ?>

  <?php if ($fb_link) { ?>
    <div id="simpleshare-twitter">
  <?php } else { ?>
    <div id="simpleshare-twitter-nofb">
  <?php } ?>
  <?php print $twitter_link ?>
  </div><!--/twitter -->
  <div class="clear close-inv-modal closemodal">
    <span class="no-js-button"><?php print l("Done Sharing", 'node/' . $node->nid) ?></span>
    <input class="simpleshare hideme" type="button" value="All Done Sharing" />
  </div><!--/close modal -->
</div>