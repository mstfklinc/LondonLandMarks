//
//  TableViewCell.h
//  LondonLandMarks
//
//  Created by Mustafa Kılınç on 24.09.2021.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *cellTitle;
@property (weak, nonatomic) IBOutlet UILabel *cellAdress;
@property (weak, nonatomic) IBOutlet UIImageView *cellImage;


@end

NS_ASSUME_NONNULL_END
