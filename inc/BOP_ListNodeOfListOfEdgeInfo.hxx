// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListNodeOfListOfEdgeInfo_HeaderFile
#define _BOP_ListNodeOfListOfEdgeInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfEdgeInfo_HeaderFile
#include <Handle_BOP_ListNodeOfListOfEdgeInfo.hxx>
#endif

#ifndef _BOP_EdgeInfo_HeaderFile
#include <BOP_EdgeInfo.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOP_EdgeInfo;
class BOP_ListOfEdgeInfo;
class BOP_ListIteratorOfListOfEdgeInfo;



class BOP_ListNodeOfListOfEdgeInfo : public TCollection_MapNode {

public:

  
      BOP_ListNodeOfListOfEdgeInfo(const BOP_EdgeInfo& I,const TCollection_MapNodePtr& n);
  
        BOP_EdgeInfo& Value() const;




  DEFINE_STANDARD_RTTI(BOP_ListNodeOfListOfEdgeInfo)

protected:




private: 


BOP_EdgeInfo myValue;


};

#define Item BOP_EdgeInfo
#define Item_hxx <BOP_EdgeInfo.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfEdgeInfo
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfEdgeInfo.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfEdgeInfo
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfEdgeInfo.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfEdgeInfo
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfEdgeInfo_Type_()
#define TCollection_List BOP_ListOfEdgeInfo
#define TCollection_List_hxx <BOP_ListOfEdgeInfo.hxx>

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


// other Inline functions and methods (like "C++: function call" methods)


#endif