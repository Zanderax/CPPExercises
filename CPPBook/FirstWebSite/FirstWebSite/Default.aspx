<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="FirstWebSite.Default" %>
<%@ Register TagPrefix="My" TagName="UserInfoBoxControl" Src="~/UserInfoBoxControl.ascx" %>
<%@ Reference Control="~/UserInfoBoxControl.ascx" %>
<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <asp:PlaceHolder runat="server" ID="phUserInfoBox"/>
        <br/>
        <asp:Label runat="server" id="HelloWorldLabel"></asp:Label>
        <br/> <br/>
        <asp:TextBox runat="server" ID="TextInput"/>
        <asp:Button runat="server" ID="GreetButton" text="Say hello!" OnClick="GreetButton_Click"/>
        <asp:DropDownList runat="server" id="GreetList" autopostback="true" onselectedindexchanged="GreetList_SelectedIndexChanged">
            <asp:ListItem value="No One">No One</asp:ListItem>
            <asp:ListItem value="World">World</asp:ListItem>
            <asp:ListItem value="Universe">Universe</asp:ListItem>
        </asp:DropDownList>
    <div>
    
    </div>
    </form>
</body>
</html>
