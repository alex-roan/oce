// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MgtTopLoc_HeaderFile
#define _MgtTopLoc_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_PTopLoc_Datum3D.hxx>
#include <Handle_TopLoc_Datum3D.hxx>
class PTopLoc_Datum3D;
class TopLoc_Datum3D;
class PTColStd_TransientPersistentMap;
class PTColStd_PersistentTransientMap;
class PTopLoc_Location;
class TopLoc_Location;


//! The package  MgtTopLoc provides methods   to store
//! and retrieve local    coordinate    systems.  i.e.
//! translationg them from Persistent to Transient and
//! vice-versa.
//!
//! * Persistent local coordinate systems are provided
//! by the package PTopLoc.
//!
//! * Transient local  coordinate systems are provided
//! by the package TopLoc.
//!
//! This package keeps  track of previous translations
//! to preserve the incremental  feature of coordinate
//! systems. i.e.  once a  data  has  been translated,
//! translating it back will give the original data.
//!
//! Two kinds of objects are managed :
//!
//! *   Datum3D :  A  Datum3D   is an elementary local
//! coordinate system handled by reference.
//!
//! *  Location   : A Location   is  a  complex  local
//! coordinate system   made   by  linking  elementary
//! coordinate systems  (Datum3D).  If  a Location  is
//! translated twice only the local coordinate systems
//! will be the same.  This  is not a problem  as  the
//! comparison of Locations is based on the comparison
//! of local coordinate systems.
class MgtTopLoc 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Translate a  transient   Datum3D to  a  persistant
  //! Datum3D.
  Standard_EXPORT static   Handle(PTopLoc_Datum3D) Translate (const Handle(TopLoc_Datum3D)& D, PTColStd_TransientPersistentMap& M) ;
  
  //! Translate a  persistant   Datum3D to  a  transient
  //! Datum3D.
  Standard_EXPORT static   Handle(TopLoc_Datum3D) Translate (const Handle(PTopLoc_Datum3D)& D, PTColStd_PersistentTransientMap& M) ;
  
  //! Translate a non  storable  Location to  a storable
  //! Location.
  Standard_EXPORT static   PTopLoc_Location Translate (const TopLoc_Location& L, PTColStd_TransientPersistentMap& M) ;
  
  //! Translate a storable  Location  to a non  storable
  //! Location.
  Standard_EXPORT static   TopLoc_Location Translate (const PTopLoc_Location& L, PTColStd_PersistentTransientMap& M) ;




protected:





private:





};







#endif // _MgtTopLoc_HeaderFile
