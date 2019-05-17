//                                               -*- C++ -*-
/**
 *  @brief OTBall
 *
 *  Copyright 2005-2019 Airbus-EDF-IMACS-ONERA-Phimeca
 *
 *  This library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef OTTEMPLATE_OTBALL_HXX
#define OTTEMPLATE_OTBALL_HXX

#include <openturns/TypedInterfaceObject.hxx>
#include <openturns/StorageManager.hxx>
#include <openturns/Point.hxx>
#include "ottemplate/ottemplateprivate.hxx"

namespace OTTEMPLATE
{

/* forward declaration */
class OTBallImplementation;

/**
 * @class OTBall
 *
 * OTBall is some otball type to illustrate how to add some classes in Open TURNS
 */
class OTTEMPLATE_API OTBall
  : public OT::TypedInterfaceObject<OTBallImplementation>
{
  CLASSNAME;

public:

  /** Default constructor */
  OTBall();

  /** Constructor from implementation */
  OTBall(const OTBallImplementation & implementation);

  /** a func that return a point squared. **/
  OT::Point square(OT::Point & p) const;

  /** String converter */
  OT::String __repr__() const;

private:

}; /* class OTBall */

} /* namespace OTTEMPLATE */

#endif /* OTTEMPLATE_OTBALL_HXX */
