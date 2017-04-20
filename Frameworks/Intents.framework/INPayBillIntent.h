/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPayBillIntent : INIntent <INPayBillIntentExport>

@property (nonatomic, readonly, copy) INBillPayee *billPayee;
@property (nonatomic, readonly) int billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INDateComponentsRange *dueDate;
@property (nonatomic, readonly, copy) INPaymentAccount *fromAccount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INPaymentAmount *transactionAmount;
@property (nonatomic, readonly, copy) NSString *transactionNote;
@property (nonatomic, readonly, copy) INDateComponentsRange *transactionScheduledDate;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1;
- (id)_typedBackingStore;
- (id)billPayee;
- (int)billType;
- (id)description;
- (id)domain;
- (id)dueDate;
- (id)fromAccount;
- (id)initWithBillPayee:(id)arg1 fromAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5 billType:(int)arg6 dueDate:(id)arg7;
- (id)parametersByName;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (id)verb;

@end