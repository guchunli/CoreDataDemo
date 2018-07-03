//
//  Student+CoreDataProperties.m
//  demo
//
//  Created by gcl on 2018/7/3.
//  Copyright © 2018年 gcl. All rights reserved.
//
//

#import "Student+CoreDataProperties.h"

@implementation Student (CoreDataProperties)

+ (NSFetchRequest<Student *> *)fetchRequest {
	return [NSFetchRequest fetchRequestWithEntityName:@"Student"];
}

@dynamic age;
@dynamic height;
@dynamic name;
@dynamic sex;
@dynamic number;

@end
