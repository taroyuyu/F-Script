//  FSImageInspector.h Copyright (c) 2002-2006 Philippe Mougin.
//  This software is open source. See the license.

#import <AppKit/AppKit.h>

@interface FSImageInspector : NSObject
{
  NSImage *inspectedObject;
  IBOutlet NSWindow   *window;
  IBOutlet NSImageView *imageView;
}

+ (FSImageInspector *)imageInspectorWithImage:(id)object;

- (FSImageInspector *)initWithImage:(id)object;

- (void)windowWillClose:(NSNotification *)aNotification;

@end