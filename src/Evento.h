//
//  Evento.h
//  iAgendaTech
//
//  Created by Ricardo on 2/23/11.
//  Copyright 2011 _. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Evento : NSObject {

}

@property(nonatomic, retain) NSString *nome;
@property(nonatomic, retain) NSString *estado;
@property(nonatomic, retain) NSDate *data;
@property(nonatomic, retain) NSString *dataTermino;
@property(nonatomic, retain) NSString *descricao;
@property(nonatomic, retain) NSString *site;
@property(nonatomic, retain) NSString *logo;
@property(nonatomic, retain) NSURL *niceURL;

@end
