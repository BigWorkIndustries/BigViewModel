//
//  BIGConcreteViews.h
//  Pods
//
//  Created by Vincil Bishop on 2/1/16.
//
//

#import <Foundation/Foundation.h>
#import "BigViewModel-Macros.h"
#import "BIGModeledView.h"

/*
 A collection of concrete base classes that an app can inherit from.
 */

// Modeled INTERFACES //

BIG_VIEW_MODEL_CLASS_INTERFACE(BIGModeledTableViewController, UITableViewController, id)

BIG_VIEW_MODEL_CLASS_INTERFACE(BIGModeledCollectionViewController, UICollectionViewController, id)

BIG_VIEW_MODEL_CLASS_INTERFACE(BIGModeledTableViewCell, UITableViewCell, id)

BIG_VIEW_MODEL_CLASS_INTERFACE(BIGModeledCollectionViewCell, UICollectionViewCell, id)

BIG_VIEW_MODEL_CLASS_INTERFACE(BIGModeledCollectionReusableView, UICollectionReusableView, id)

BIG_VIEW_MODEL_CLASS_INTERFACE(BIGModeledView, UIView, id)

BIG_VIEW_MODEL_CLASS_INTERFACE(BIGModeledViewController, UIViewController, id)


