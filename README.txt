Sharing to Facebook and Twitter via Drupal usually means wrestling with
authentication, complex settings, etc.  New APIs from both sites make it
much easier.

This module adds a workflow which makes it easy to post to each service
following the creation of a node.  There's lots of share widgets which will
allow you to share while viewing the node itself, but nothing that prompts
the user after node creation to do so (without complex setup).

Installation
------------
1. Install the Simpleshare Module by enabling it

2. If you want to share using Facebook, head over there and setup an application:
    http://www.facebook.com/developers/createapp.php

3. Go to /admin/settings/simpleshare and enter your facebook app id and choose the
    node types you want to share. If you don't setup a facebook app and enter an id, 
    only twitter sharing is available.
    
4.  Setup permissions for who can edit and share on the /admin/user/permissions screen

Usage Tips
------------
1.  You an always trigger the share modal by adding ?simpleshare=true to the end of a node url


To Do
-------
1.  Change from drupal_goto to a redirect function to direct to modal


Credits
-------
Created by Mustardseed Media Inc. (http://mustardseedmedia.com)