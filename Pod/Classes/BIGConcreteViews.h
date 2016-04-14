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

BIG_VIEW_MODEL_INTERFACE(BIGModeledTableViewController, UITableViewController)

BIG_VIEW_MODEL_INTERFACE(BIGModeledCollectionViewController, UICollectionViewController)

BIG_VIEW_MODEL_INTERFACE(BIGModeledTableViewCell, UITableViewCell)

BIG_VIEW_MODEL_INTERFACE(BIGModeledCollectionViewCell, UICollectionViewCell)

BIG_VIEW_MODEL_INTERFACE(BIGModeledCollectionReusableView, UICollectionReusableView)

BIG_VIEW_MODEL_INTERFACE(BIGModeledView, UIView)

BIG_VIEW_MODEL_INTERFACE(BIGModeledViewController, UIViewController)


