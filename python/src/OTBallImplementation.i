// SWIG file OTBallImplementation.i

%{
#include "ottemplate/OTBallImplementation.hxx"
%}

%include OTBallImplementation_doc.i

%template(OTBallImplementationdInterfaceObject)           OT::TypedInterfaceObject<OTTEMPLATE::OTBallImplementation>;

%include ottemplate/OTBallImplementation.hxx
namespace OTTEMPLATE { %extend OTBallImplementation { OTBallImplementation(const OTBallImplementation & other) { return new OTTEMPLATE::OTBallImplementation(other); } } }
