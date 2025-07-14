// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CC_wLD
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "JPetGeantEventPack.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_JPetGeantEventInformation(void *p = nullptr);
   static void *newArray_JPetGeantEventInformation(Long_t size, void *p);
   static void delete_JPetGeantEventInformation(void *p);
   static void deleteArray_JPetGeantEventInformation(void *p);
   static void destruct_JPetGeantEventInformation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetGeantEventInformation*)
   {
      ::JPetGeantEventInformation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JPetGeantEventInformation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("JPetGeantEventInformation", ::JPetGeantEventInformation::Class_Version(), "../Objects/Framework/JPetGeantEventInformation.h", 30,
                  typeid(::JPetGeantEventInformation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JPetGeantEventInformation::Dictionary, isa_proxy, 4,
                  sizeof(::JPetGeantEventInformation) );
      instance.SetNew(&new_JPetGeantEventInformation);
      instance.SetNewArray(&newArray_JPetGeantEventInformation);
      instance.SetDelete(&delete_JPetGeantEventInformation);
      instance.SetDeleteArray(&deleteArray_JPetGeantEventInformation);
      instance.SetDestructor(&destruct_JPetGeantEventInformation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetGeantEventInformation*)
   {
      return GenerateInitInstanceLocal(static_cast<::JPetGeantEventInformation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::JPetGeantEventInformation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_JPetGeantDecayTree(void *p = nullptr);
   static void *newArray_JPetGeantDecayTree(Long_t size, void *p);
   static void delete_JPetGeantDecayTree(void *p);
   static void deleteArray_JPetGeantDecayTree(void *p);
   static void destruct_JPetGeantDecayTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetGeantDecayTree*)
   {
      ::JPetGeantDecayTree *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JPetGeantDecayTree >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("JPetGeantDecayTree", ::JPetGeantDecayTree::Class_Version(), "../Objects/Framework/JPetGeantDecayTree.h", 34,
                  typeid(::JPetGeantDecayTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JPetGeantDecayTree::Dictionary, isa_proxy, 4,
                  sizeof(::JPetGeantDecayTree) );
      instance.SetNew(&new_JPetGeantDecayTree);
      instance.SetNewArray(&newArray_JPetGeantDecayTree);
      instance.SetDelete(&delete_JPetGeantDecayTree);
      instance.SetDeleteArray(&deleteArray_JPetGeantDecayTree);
      instance.SetDestructor(&destruct_JPetGeantDecayTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetGeantDecayTree*)
   {
      return GenerateInitInstanceLocal(static_cast<::JPetGeantDecayTree*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::JPetGeantDecayTree*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_JPetGeantScinHits(void *p = nullptr);
   static void *newArray_JPetGeantScinHits(Long_t size, void *p);
   static void delete_JPetGeantScinHits(void *p);
   static void deleteArray_JPetGeantScinHits(void *p);
   static void destruct_JPetGeantScinHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetGeantScinHits*)
   {
      ::JPetGeantScinHits *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JPetGeantScinHits >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("JPetGeantScinHits", ::JPetGeantScinHits::Class_Version(), "../Objects/Framework/JPetGeantScinHits.h", 27,
                  typeid(::JPetGeantScinHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JPetGeantScinHits::Dictionary, isa_proxy, 4,
                  sizeof(::JPetGeantScinHits) );
      instance.SetNew(&new_JPetGeantScinHits);
      instance.SetNewArray(&newArray_JPetGeantScinHits);
      instance.SetDelete(&delete_JPetGeantScinHits);
      instance.SetDeleteArray(&deleteArray_JPetGeantScinHits);
      instance.SetDestructor(&destruct_JPetGeantScinHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetGeantScinHits*)
   {
      return GenerateInitInstanceLocal(static_cast<::JPetGeantScinHits*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::JPetGeantScinHits*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_JPetGeantEventPack(void *p = nullptr);
   static void *newArray_JPetGeantEventPack(Long_t size, void *p);
   static void delete_JPetGeantEventPack(void *p);
   static void deleteArray_JPetGeantEventPack(void *p);
   static void destruct_JPetGeantEventPack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JPetGeantEventPack*)
   {
      ::JPetGeantEventPack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JPetGeantEventPack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("JPetGeantEventPack", ::JPetGeantEventPack::Class_Version(), "JPetGeantEventPack.h", 35,
                  typeid(::JPetGeantEventPack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JPetGeantEventPack::Dictionary, isa_proxy, 4,
                  sizeof(::JPetGeantEventPack) );
      instance.SetNew(&new_JPetGeantEventPack);
      instance.SetNewArray(&newArray_JPetGeantEventPack);
      instance.SetDelete(&delete_JPetGeantEventPack);
      instance.SetDeleteArray(&deleteArray_JPetGeantEventPack);
      instance.SetDestructor(&destruct_JPetGeantEventPack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JPetGeantEventPack*)
   {
      return GenerateInitInstanceLocal(static_cast<::JPetGeantEventPack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::JPetGeantEventPack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr JPetGeantEventInformation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *JPetGeantEventInformation::Class_Name()
{
   return "JPetGeantEventInformation";
}

//______________________________________________________________________________
const char *JPetGeantEventInformation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventInformation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int JPetGeantEventInformation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventInformation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JPetGeantEventInformation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventInformation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JPetGeantEventInformation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventInformation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr JPetGeantDecayTree::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *JPetGeantDecayTree::Class_Name()
{
   return "JPetGeantDecayTree";
}

//______________________________________________________________________________
const char *JPetGeantDecayTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantDecayTree*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int JPetGeantDecayTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantDecayTree*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JPetGeantDecayTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantDecayTree*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JPetGeantDecayTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantDecayTree*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr JPetGeantScinHits::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *JPetGeantScinHits::Class_Name()
{
   return "JPetGeantScinHits";
}

//______________________________________________________________________________
const char *JPetGeantScinHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantScinHits*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int JPetGeantScinHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantScinHits*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JPetGeantScinHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantScinHits*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JPetGeantScinHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantScinHits*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr JPetGeantEventPack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *JPetGeantEventPack::Class_Name()
{
   return "JPetGeantEventPack";
}

//______________________________________________________________________________
const char *JPetGeantEventPack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventPack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int JPetGeantEventPack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventPack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JPetGeantEventPack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventPack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JPetGeantEventPack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JPetGeantEventPack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void JPetGeantEventInformation::Streamer(TBuffer &R__b)
{
   // Stream an object of class JPetGeantEventInformation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JPetGeantEventInformation::Class(),this);
   } else {
      R__b.WriteClassBuffer(JPetGeantEventInformation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JPetGeantEventInformation(void *p) {
      return  p ? new(p) ::JPetGeantEventInformation : new ::JPetGeantEventInformation;
   }
   static void *newArray_JPetGeantEventInformation(Long_t nElements, void *p) {
      return p ? new(p) ::JPetGeantEventInformation[nElements] : new ::JPetGeantEventInformation[nElements];
   }
   // Wrapper around operator delete
   static void delete_JPetGeantEventInformation(void *p) {
      delete (static_cast<::JPetGeantEventInformation*>(p));
   }
   static void deleteArray_JPetGeantEventInformation(void *p) {
      delete [] (static_cast<::JPetGeantEventInformation*>(p));
   }
   static void destruct_JPetGeantEventInformation(void *p) {
      typedef ::JPetGeantEventInformation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::JPetGeantEventInformation

//______________________________________________________________________________
void JPetGeantDecayTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class JPetGeantDecayTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JPetGeantDecayTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(JPetGeantDecayTree::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JPetGeantDecayTree(void *p) {
      return  p ? new(p) ::JPetGeantDecayTree : new ::JPetGeantDecayTree;
   }
   static void *newArray_JPetGeantDecayTree(Long_t nElements, void *p) {
      return p ? new(p) ::JPetGeantDecayTree[nElements] : new ::JPetGeantDecayTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_JPetGeantDecayTree(void *p) {
      delete (static_cast<::JPetGeantDecayTree*>(p));
   }
   static void deleteArray_JPetGeantDecayTree(void *p) {
      delete [] (static_cast<::JPetGeantDecayTree*>(p));
   }
   static void destruct_JPetGeantDecayTree(void *p) {
      typedef ::JPetGeantDecayTree current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::JPetGeantDecayTree

//______________________________________________________________________________
void JPetGeantScinHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class JPetGeantScinHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JPetGeantScinHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(JPetGeantScinHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JPetGeantScinHits(void *p) {
      return  p ? new(p) ::JPetGeantScinHits : new ::JPetGeantScinHits;
   }
   static void *newArray_JPetGeantScinHits(Long_t nElements, void *p) {
      return p ? new(p) ::JPetGeantScinHits[nElements] : new ::JPetGeantScinHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_JPetGeantScinHits(void *p) {
      delete (static_cast<::JPetGeantScinHits*>(p));
   }
   static void deleteArray_JPetGeantScinHits(void *p) {
      delete [] (static_cast<::JPetGeantScinHits*>(p));
   }
   static void destruct_JPetGeantScinHits(void *p) {
      typedef ::JPetGeantScinHits current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::JPetGeantScinHits

//______________________________________________________________________________
void JPetGeantEventPack::Streamer(TBuffer &R__b)
{
   // Stream an object of class JPetGeantEventPack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JPetGeantEventPack::Class(),this);
   } else {
      R__b.WriteClassBuffer(JPetGeantEventPack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JPetGeantEventPack(void *p) {
      return  p ? new(p) ::JPetGeantEventPack : new ::JPetGeantEventPack;
   }
   static void *newArray_JPetGeantEventPack(Long_t nElements, void *p) {
      return p ? new(p) ::JPetGeantEventPack[nElements] : new ::JPetGeantEventPack[nElements];
   }
   // Wrapper around operator delete
   static void delete_JPetGeantEventPack(void *p) {
      delete (static_cast<::JPetGeantEventPack*>(p));
   }
   static void deleteArray_JPetGeantEventPack(void *p) {
      delete [] (static_cast<::JPetGeantEventPack*>(p));
   }
   static void destruct_JPetGeantEventPack(void *p) {
      typedef ::JPetGeantEventPack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::JPetGeantEventPack

namespace ROOT {
   static TClass *vectorlETVector3gR_Dictionary();
   static void vectorlETVector3gR_TClassManip(TClass*);
   static void *new_vectorlETVector3gR(void *p = nullptr);
   static void *newArray_vectorlETVector3gR(Long_t size, void *p);
   static void delete_vectorlETVector3gR(void *p);
   static void deleteArray_vectorlETVector3gR(void *p);
   static void destruct_vectorlETVector3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVector3>*)
   {
      vector<TVector3> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVector3>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVector3>", -2, "vector", 428,
                  typeid(vector<TVector3>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETVector3gR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TVector3>) );
      instance.SetNew(&new_vectorlETVector3gR);
      instance.SetNewArray(&newArray_vectorlETVector3gR);
      instance.SetDelete(&delete_vectorlETVector3gR);
      instance.SetDeleteArray(&deleteArray_vectorlETVector3gR);
      instance.SetDestructor(&destruct_vectorlETVector3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVector3> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TVector3>","std::vector<TVector3, std::allocator<TVector3> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TVector3>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVector3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TVector3>*>(nullptr))->GetClass();
      vectorlETVector3gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVector3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVector3gR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TVector3> : new vector<TVector3>;
   }
   static void *newArray_vectorlETVector3gR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TVector3>[nElements] : new vector<TVector3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVector3gR(void *p) {
      delete (static_cast<vector<TVector3>*>(p));
   }
   static void deleteArray_vectorlETVector3gR(void *p) {
      delete [] (static_cast<vector<TVector3>*>(p));
   }
   static void destruct_vectorlETVector3gR(void *p) {
      typedef vector<TVector3> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TVector3>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 102,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr))->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete (static_cast<map<int,int>*>(p));
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] (static_cast<map<int,int>*>(p));
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_CC_wLD() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_CC_wLD) = RecordReadRules_CC_wLD();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_CC_wLD));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_CC_wLD_Impl() {
    static const char* headers[] = {
"JPetGeantEventPack.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/ultramarynowyb/software/root_install/include/",
"/home/ultramarynowyb/JPETG4/Analysis/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CC_wLD dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$../Objects/Framework/JPetGeantEventInformation.h")))  __attribute__((annotate("$clingAutoload$JPetGeantEventPack.h")))  JPetGeantEventInformation;
class __attribute__((annotate("$clingAutoload$../Objects/Framework/JPetGeantDecayTree.h")))  __attribute__((annotate("$clingAutoload$JPetGeantEventPack.h")))  JPetGeantDecayTree;
class __attribute__((annotate("$clingAutoload$../Objects/Framework/JPetGeantScinHits.h")))  __attribute__((annotate("$clingAutoload$JPetGeantEventPack.h")))  JPetGeantScinHits;
class __attribute__((annotate("$clingAutoload$JPetGeantEventPack.h")))  JPetGeantEventPack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CC_wLD dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "JPetGeantEventPack.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"JPetGeantDecayTree", payloadCode, "@",
"JPetGeantEventInformation", payloadCode, "@",
"JPetGeantEventPack", payloadCode, "@",
"JPetGeantScinHits", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CC_wLD",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CC_wLD_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CC_wLD_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CC_wLD() {
  TriggerDictionaryInitialization_CC_wLD_Impl();
}
