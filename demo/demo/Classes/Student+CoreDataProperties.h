//
//  Student+CoreDataProperties.h
//  demo
//
//  Created by gcl on 2018/7/3.
//  Copyright © 2018年 gcl. All rights reserved.
//
//

#import "Student+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Student (CoreDataProperties)

+ (NSFetchRequest<Student *> *)fetchRequest;

@property (nonatomic) int32_t age;
@property (nonatomic) int32_t height;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *sex;
@property (nonatomic) int32_t number;

@end

NS_ASSUME_NONNULL_END
