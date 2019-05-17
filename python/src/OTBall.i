// SWIG file OTBall.i

%{
#include "ottemplate/OTBall.hxx"
%}

%include OTBall_doc.i

TypedInterfaceObjectImplementationHelper(OTTEMPLATE, OTBall, OTBallImplementation)

%include ottemplate/OTBall.hxx
namespace OTTEMPLATE { %extend OTBall { OTBall(const OTBall & other) { return new OTTEMPLATE::OTBall(other); } } }
