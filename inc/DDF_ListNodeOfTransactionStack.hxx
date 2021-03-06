// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDF_ListNodeOfTransactionStack_HeaderFile
#define _DDF_ListNodeOfTransactionStack_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_DDF_ListNodeOfTransactionStack.hxx>

#include <Handle_DDF_Transaction.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class DDF_Transaction;
class DDF_TransactionStack;
class DDF_ListIteratorOfTransactionStack;



class DDF_ListNodeOfTransactionStack : public TCollection_MapNode
{

public:

  
    DDF_ListNodeOfTransactionStack(const Handle(DDF_Transaction)& I, const TCollection_MapNodePtr& n);
  
      Handle(DDF_Transaction)& Value()  const;




  DEFINE_STANDARD_RTTI(DDF_ListNodeOfTransactionStack)

protected:




private: 


  Handle(DDF_Transaction) myValue;


};

#define Item Handle(DDF_Transaction)
#define Item_hxx <DDF_Transaction.hxx>
#define TCollection_ListNode DDF_ListNodeOfTransactionStack
#define TCollection_ListNode_hxx <DDF_ListNodeOfTransactionStack.hxx>
#define TCollection_ListIterator DDF_ListIteratorOfTransactionStack
#define TCollection_ListIterator_hxx <DDF_ListIteratorOfTransactionStack.hxx>
#define Handle_TCollection_ListNode Handle_DDF_ListNodeOfTransactionStack
#define TCollection_ListNode_Type_() DDF_ListNodeOfTransactionStack_Type_()
#define TCollection_List DDF_TransactionStack
#define TCollection_List_hxx <DDF_TransactionStack.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _DDF_ListNodeOfTransactionStack_HeaderFile
