; $Id: shadowbox.make,v 1.1.2.4.2.3 2010/06/15 15:39:46 nicholasalipaz Exp $
; Example drush make file for downloading third party Shadowbox library.
; http://bit.ly/EMVW5

core = 6.x

libraries[shadowbox][download][type] = "post"
libraries[shadowbox][download][post_data] = "format=tar&adapter=jquery&players[]=img&players[]=iframe&players[]=html&players[]=swf&players[]=flv&players[]=qt&players[]=wmp&language=en&css_support=on"
libraries[shadowbox][download][file_type] = "tar.gz"
libraries[shadowbox][download][url] = "http://www.shadowbox-js.com/download"
libraries[shadowbox][directory_name] = "shadowbox"
libraries[shadowbox][destination] = "libraries"
