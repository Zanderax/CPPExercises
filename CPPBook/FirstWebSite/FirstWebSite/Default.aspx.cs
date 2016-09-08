using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace FirstWebSite
{
    public partial class Default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            UserInfoBoxControl userInfoBoxControl = (UserInfoBoxControl)LoadControl("~/UserInfoBoxControl.ascx");
            userInfoBoxControl.UserName = "Joe Blogs";
            userInfoBoxControl.UserAge = 123;
            userInfoBoxControl.UserCountry = "Australia";
            phUserInfoBox.Controls.Add(userInfoBoxControl);
            HelloWorldLabel.Text = "Hello,";
            
        }

        protected void GreetButton_Click(object sender, EventArgs e)
        {
            //HelloWorldLabel.Text += TextInput.Text;
        }

        protected void GreetList_SelectedIndexChanged(object sender, EventArgs e)
        {
            HelloWorldLabel.Text = "Hello, " + GreetList.SelectedValue;
        }
    }
}