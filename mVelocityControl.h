//
// You received this file as part of Finroc
// A framework for intelligent robot control
//
// Copyright (C) AG Robotersysteme TU Kaiserslautern
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
//----------------------------------------------------------------------
/*!\file    projects/finroc_projects_robprak2020_2/mVelocityControl.h
 *
 * \author  ChengYi Huang
 *
 * \date    2021-01-27
 *
 * \brief Contains mVelocityControl
 *
 * \b mVelocityControl
 *
 * this module is responsible for controlling velocity. velocity=0 or velocity=constant value
 *
 */
//----------------------------------------------------------------------
#ifndef __projects__finroc_projects_robprak2020_2__mVelocityControl_h__
#define __projects__finroc_projects_robprak2020_2__mVelocityControl_h__

#include "plugins/structure/tModule.h"

//----------------------------------------------------------------------
// External includes (system with <>, local with "")
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Internal includes with ""
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Namespace declaration
//----------------------------------------------------------------------
namespace finroc
{
namespace finroc_projects_robprak2020_2
{

//----------------------------------------------------------------------
// Forward declarations / typedefs / enums
//----------------------------------------------------------------------

//----------------------------------------------------------------------
// Class declaration
//----------------------------------------------------------------------
//! SHORT_DESCRIPTION
/*!
 * this module is responsible for controlling velocity. velocity=0 or velocity=constant value
 */
class mVelocityControl : public structure::tModule
{

//----------------------------------------------------------------------
// Ports (These are the only variables that may be declared public)
//----------------------------------------------------------------------
public:
  /*
    tStaticParameter<double> static_parameter_1;   Example for a static parameter. Replace or delete it!

    tParameter<double> par_parameter_1;   Example for a runtime parameter named "Parameter 1". Replace or delete it!

    tInput<double> in_signal_1;   Example for input ports named "Signal 1" and "Signal 2". Replace or delete them!
    tInput<double> in_signal_2;

    tOutput<double> out_signal_1;   Examples for output ports named "Signal 1" and "Signal 2". Replace or delete them!
    tOutput<double> out_signal_2;*/

//----------------------------------------------------------------------
// Public methods and typedefs
//----------------------------------------------------------------------
public:

  mVelocityControl(core::tFrameworkElement *parent, const std::string &name = "VelocityControl");

  tInput<bool> noLineDetEnable;
  tInput<bool> stopEnable;
  tInput<bool> conesDetEnable;
  tInput<bool> stop_5_secondEnable;

  tOutput<double> out_velocity;



//----------------------------------------------------------------------
// Protected methods
//----------------------------------------------------------------------
protected:


  /*! Destructor
   *
   * The destructor of modules is declared protected to avoid accidental deletion. Deleting
   * modules is already handled by the framework.
   */
  virtual ~mVelocityControl();

//----------------------------------------------------------------------
// Private fields and methods
//----------------------------------------------------------------------
private:

  bool noLineDet;
  bool stop;

  //Here is the right place for your variables. Replace this line by your declarations!

  virtual void OnStaticParameterChange() override;   //Might be needed to process static parameters. Delete otherwise!

  virtual void OnParameterChange() override;   //Might be needed to react to changes in parameters independent from Update() calls. Delete otherwise!

  virtual void Update() override;

};

//----------------------------------------------------------------------
// End of namespace declaration
//----------------------------------------------------------------------
}
}



#endif