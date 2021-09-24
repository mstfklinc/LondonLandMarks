//
//  DetailViewController.m
//  LondonLandMarks
//
//  Created by Mustafa Kılınç on 24.09.2021.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.mapView.layer.cornerRadius = 5;
    self.button.layer.cornerRadius = 5;
    
    self.navigationItem.title = self.detailModal[0];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)direciton:(id)sender {
}
@end
